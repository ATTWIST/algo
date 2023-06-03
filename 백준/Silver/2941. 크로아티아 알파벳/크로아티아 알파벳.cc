#include <bits/stdc++.h>
using namespace std;
string s;
char a,b,c;
int n,sum;

int main(){
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		a = char(*(s.begin()+i));
		b = char(*(s.begin()+i+1));
		c = char(*(s.begin()+i+2));
		if(a == 'c' && b == '=') sum++;
		if(a == 'c' && b == '-') sum++;
		if(a == 'd' && b == 'z' && c == '=') sum++;
		if(a == 'd' && b == '-') sum++;
		if(a == 'l' && b == 'j') sum++;
		if(a == 'n' && b == 'j') sum++;
		if(a == 's' && b == '=') sum++;
		if(a == 'z' && b == '=') sum++;
	}
	cout << s.size()-sum;
}