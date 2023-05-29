#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll T;
int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> T;
	for(int i=0; i < T; i++){
		for(int j = T-1 ; j > i; j--){
		cout << " ";
		}
	for(int j = 0 ; j <= i; j++){
			cout << "*";
		}
		cout << " " << '\n';
	}
}
