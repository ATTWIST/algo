#include <bits/stdc++.h>
using namespace std;
int a,sum,cnt;
string s;
int main(){
	cin >> a;
	for(int i = 0; i < a; i++){
	cin >> s;
	for(int j = 0; j < s.size(); j++){
		if(s[j] == 'O'){
			cnt++;
			sum += cnt;
			}
	    else if(s[j] == 'X'){
	    	cnt = 0;
		}
		}
		cout << sum << "\n";
		sum = 0;
		cnt = 0;
}
}