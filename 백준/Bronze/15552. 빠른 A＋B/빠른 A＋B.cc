#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,T;
vector<int> v;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> T;
	for (int i = 0; i < T; i++){
		cin >> a >> b;
		v.push_back(a+b);
	}
	for(int c : v)cout << c << '\n';
	
}