import ccxt
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import tkinter as tk
from tkinter import ttk

class CryptoTradingBot:
    def __init__(self, exchange, symbol, timeframe='1h'):
        self.exchange = getattr(ccxt, exchange)()
        self.symbol = symbol
        self.timeframe = timeframe

    def fetch_ohlcv(self, limit=500):
        ohlcv = self.exchange.fetch_ohlcv(self.symbol, self.timeframe, limit=limit)
        df = pd.DataFrame(ohlcv, columns=['timestamp', 'open', 'high', 'low', 'close', 'volume'])
        df['timestamp'] = pd.to_datetime(df['timestamp'], unit='ms')
        return df

    def calculate_sma(self, data, period):
        return data['close'].rolling(window=period).mean()

    def generate_signals(self, data, short_period=10, long_period=30):
        data['short_sma'] = self.calculate_sma(data, short_period)
        data['long_sma'] = self.calculate_sma(data, long_period)
        data['signal'] = np.where(data['short_sma'] > data['long_sma'], 1, 0)
        data['position'] = data['signal'].diff()
        return data

class TradingBotGUI:
    def __init__(self, master):
        self.master = master
        self.master.title("Crypto Trading Bot GUI")
        self.bot = CryptoTradingBot('binance', 'BTC/USDT')
        
        self.create_widgets()
        self.update_data()

    def create_widgets(self):
        self.frame = ttk.Frame(self.master, padding="3 3 12 12")
        self.frame.grid(column=0, row=0, sticky=(tk.N, tk.W, tk.E, tk.S))

        self.tree = ttk.Treeview(self.frame, columns=('timestamp', 'open', 'high', 'low', 'close', 'volume', 'signal'))
        self.tree.heading('timestamp', text='Timestamp')
        self.tree.heading('open', text='Open')
        self.tree.heading('high', text='High')
        self.tree.heading('low', text='Low')
        self.tree.heading('close', text='Close')
        self.tree.heading('volume', text='Volume')
        self.tree.heading('signal', text='Signal')
        self.tree.grid(column=0, row=0, columnspan=3)

        self.fig, self.ax = plt.subplots(figsize=(10, 5))
        self.canvas = FigureCanvasTkAgg(self.fig, master=self.frame)
        self.canvas.get_tk_widget().grid(column=0, row=1, columnspan=3)

        ttk.Button(self.frame, text="Update Data", command=self.update_data).grid(column=1, row=2)

    def update_data(self):
        data = self.bot.fetch_ohlcv()
        signals = self.bot.generate_signals(data)

        self.tree.delete(*self.tree.get_children())
        for index, row in signals.iterrows():
            self.tree.insert('', 'end', values=(row['timestamp'], row['open'], row['high'], row['low'], row['close'], row['volume'], row['signal']))

        self.ax.clear()
        self.ax.plot(signals['timestamp'], signals['close'], label='Close Price')
        self.ax.plot(signals['timestamp'], signals['short_sma'], label='Short SMA')
        self.ax.plot(signals['timestamp'], signals['long_sma'], label='Long SMA')
        
        buy_signals = signals[signals['position'] == 1]
        sell_signals = signals[signals['position'] == -1]
        
        self.ax.scatter(buy_signals['timestamp'], buy_signals['close'], marker='^', color='g', label='Buy Signal')
        self.ax.scatter(sell_signals['timestamp'], sell_signals['close'], marker='v', color='r', label='Sell Signal')

        self.ax.set_xlabel('Timestamp')
        self.ax.set_ylabel('Price')
        self.ax.set_title('BTC/USDT Price and Trading Signals')
        self.ax.legend()
        self.ax.tick_params(axis='x', rotation=45)
        self.fig.tight_layout()
        self.canvas.draw()

if __name__ == "__main__":
    root = tk.Tk()
    app = TradingBotGUI(root)
    root.mainloop()
