#include <bits/stdc++.h>
using namespace std;
bool cpr(string a,string b){
	if(a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
int main(){
	//ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string a[2];
	cin >> a[0] >> a[1];
	reverse(a[0].begin(), a[0].end());
	reverse(a[1].begin(), a[1].end());
	sort(a, a + 2, cpr);
	cout << a[1];
}