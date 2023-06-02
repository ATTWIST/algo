#include <bits/stdc++.h>
using namespace std;
int sum = 0;
char st[16];
int main(){
    cin >> st;
	for(int i = 0; i < 16; i++){
		if(st[i] == 'A'|| st[i] == 'B' || st[i] =='C'){
			sum += 3;	
		}
		else if(st[i] == 'D' || st[i] == 'E' || st[i] == 'F'){
			sum += 4;	
		}
		else if(st[i] == 'G' || st[i] == 'H' || st[i] == 'I'){
			sum += 5;	
		}
		else if(st[i] == 'J' || st[i] == 'K' || st[i] == 'L'){
			sum += 6;	
		}
		else if(st[i] == 'M' || st[i] == 'N' || st[i] == 'O'){
			sum += 7;	
		}
		else if(st[i] == 'P' || st[i] == 'Q' || st[i] == 'R'|| st[i] == 'S'){
			sum += 8;	
		}
		else if(st[i] == 'T' || st[i] == 'U' || st[i] == 'V'){
			sum += 9;	
		}
		else if(st[i] == 'W' || st[i] == 'X' || st[i] == 'Y'|| st[i] == 'Z'){
			sum += 10;	
		}
		else break;
	}	
cout << sum;
}
