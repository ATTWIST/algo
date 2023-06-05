#include <bits/stdc++.h>
using namespace std;
char c[27];
char ret[27];
string s;  

int main(){
	cin >> s;
	for(int i = 0; i < 26; i++){
		c[i] = int('a')+i;
		}
	for(int i = 0; i < s.size(); i++){
		for(int j = 0; j < 26; j++){
			if(char(*(s.begin()+i)) == c[j]){
				ret[j]++;
			}	
		}	
	}
	for(int i = 0; i < 26; i++){
		printf("%d ",ret[i]);
}
	return 0;
}