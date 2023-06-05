#include <bits/stdc++.h>
using namespace std;
int ar[9];
int sum;
int fs;

int main(){
	for(int i = 0; i < 9; i++){
		cin >> ar[i];
		sum += ar[i];
	}
	fs = sum - 100;
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			if(ar[i] != ar[j] && fs == ar[i] + ar[j]){
				ar[i] = 99999999;
				ar[j] = 99999999;
				sort(ar,ar+9);
				for(int i = 0; i < 7; i++){
				cout << ar[i] << '\n';	
				}
				exit(0);
				}
				}
}
}