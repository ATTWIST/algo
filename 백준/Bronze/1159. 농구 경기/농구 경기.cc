#include <bits/stdc++.h>
using namespace std; 
string s;
int a;
int cnt[26];
int sum;
int main(){
	cin >> a;
	for(int i = 0; i < a; i++){
		cin >> s;
    	cnt[char(*s.begin()) - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(cnt[i] >= 5){
			cout << (char)(i + 'a');
		}
		else if(cnt[i] < 5){
			sum += 1;
		}
	}
	if(sum == 26){
		cout << "PREDAJA";
	}
	return 0;
}