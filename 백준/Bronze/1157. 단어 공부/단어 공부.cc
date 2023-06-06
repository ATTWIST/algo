#include<bits/stdc++.h>
using namespace std;
int sdae[26];
string s;
int maxi = sdae[0];
int d = 0; int ck = 0;
int main(){
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 65 && s[i] < 91){
			sdae[s[i] - 'A']++;	 
		}
		else if(s[i] >= 97 && s[i] < 123){
			sdae[s[i] - 'a']++;	 
		}
	}
	for(int i = 0; i < 26; i++){
		if (maxi < sdae[i]) {maxi = sdae[i]; d = i;}
		}
	for(int i = 0; i < 26; i++){
		if (maxi == sdae[i]) {ck++;}
	}
	if(ck > 1)cout << "?";
	else cout << char(d+'A');
	return 0;
}