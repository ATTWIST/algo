#include <bits/stdc++.h>
using namespace std;
int a;
int main(){
	cin >> a;
for(int i=0; i < a; i++){
	for(int j = a-1 ; j > i; j--){
		cout << " ";
		}
	for(int j = 0 ; j <= i; j++){
			cout << "*";
			if(j >= 1){
				cout << "*";
			}
		}
		cout << " " << '\n';
		}
for(int i = 0; i < a; i++){
		for(int j = 0 ; j <= i; j++){
			cout << " ";
		}
		for(int j = a-1 ; j > i; j--){
		    cout << "*";
		    if(a-1 > j){
		    cout << "*";	
			}
		}
		cout << " " << '\n';
		}	
}	