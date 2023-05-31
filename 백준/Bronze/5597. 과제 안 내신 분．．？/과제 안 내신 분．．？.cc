#include <bits/stdc++.h>
using namespace std;
int ar[34] = {0};
int a;
int n = -5;
int k = -5;
int main(){
	for(int i = 0; i < 28; i++){
		cin >> a;
		ar[a-1] = 1;
	}
	for(int i = 0; i < 30; i++){
	if(ar[i] == 0){
		if(n == -5){
		n = i+1;
		}
		else k = i+1;
	}
	}
	
	cout << n << '\n';
	cout << k << '\n';			
}