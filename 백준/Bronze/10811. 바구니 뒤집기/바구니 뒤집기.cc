#include <bits/stdc++.h>
using namespace std;
int a,b,j,k;
vector<int> v;
int main(){
	cin >> a >> b;
	for(int i = 1; i <= a; i++){
		v.push_back(i);
	}
	for(int i = 0; i < b; i++){
		cin >> j >> k;
		reverse(v.begin() + j-1, v.begin() + k);
	}
	for(auto it : v)cout << it << '\n';
}