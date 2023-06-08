#include <bits/stdc++.h>
using namespace std;
int a;
string s;
vector<string> v;
bool cmp(string a, string b){
	if(a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a;
	for(int i = 0; i < a; i++)
	{
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),cmp);
	v.erase(unique(v.begin(),v.end()),v.end());
	for(auto it : v)cout << it << '\n';
	}