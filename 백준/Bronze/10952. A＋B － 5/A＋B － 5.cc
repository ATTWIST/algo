#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b = 1;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	while(1){
	cin >> a >> b;
	if(a == 0 && b == 0){
	exit(0);
	}
	cout << a+b << '\n';
	}	
}