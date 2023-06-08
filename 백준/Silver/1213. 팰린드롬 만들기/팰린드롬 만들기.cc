#include <bits/stdc++.h>
using namespace std;
int a,hol;
string s,ret;
int ap[26];
char mid;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> s;
    for(char a : s)ap[a - 'A']++;
	for(int i = 26; i >= 0; i--){
		if(ap[i]){
			if(ap[i] & 1){
				mid = char(i+'A');hol++;
				ap[i]--;
			}
			if(hol == 2)break;
			for(int j = 0; j < ap[i]; j +=2){
				ret = char(i+'A') + ret;
				ret += char(i+'A');
			}
			
		}
	}
	if(mid)ret.insert(ret.begin() + ret.size() / 2, mid);
	if(hol == 2)cout << "I'm Sorry Hansoo\n";
	else cout << ret << "\n"; 
	return 0;
}