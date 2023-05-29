#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,T;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> T;
	for (int i = 1; i <= T; i++){
		cin >> a >> b;
		cout << "Case #" << i << ": " << a
		<<" " << "+" << " " << b << " = " << a+b << '\n';
	}
	
}