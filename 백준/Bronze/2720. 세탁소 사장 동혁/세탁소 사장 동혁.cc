#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
int main(){
	cin >> a;
	for(int i = 0; i < a; i++){
		cin >> b;
		c = b / 25;
		d = b%25 / 10;
		e = (b%25 % 10) /5;
		f =  ((b%25 % 10) %5) / 1;
		cout << c << " " << d << " " << e << " " << f << '\n';
	}
}