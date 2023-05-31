#include <bits/stdc++.h>
using namespace std;
int a;
string s;
int main(){
	cin >> s;
	cin >> a;
	cout << char(*(s.begin()+a-1)) << '\n';
	}