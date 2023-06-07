#include <bits/stdc++.h>
using namespace std;
int a,b;
string s;
map<string, int> mp;
string ck[100004];
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b;
	for(int i = 1; i <= a; i++){
		cin >> s;
		mp[s] = i;
		ck[i] = s;
	}
	for(int i = 1; i <= b; i++){
		cin >> s;
		if(atoi(s.c_str()) == 0){
			cout << mp[s] << '\n';
		}
		else{
			cout << ck[atoi(s.c_str())] << '\n';
		}
		
	}
	}