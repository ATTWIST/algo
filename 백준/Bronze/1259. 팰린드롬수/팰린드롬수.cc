#include <bits/stdc++.h>
using namespace std;
string a,b;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	    while(cin >> a){
	    int i = atoi(a.c_str());
		if(i == 0){
			exit(0);}
		b = a;
		reverse(a.begin(),a.end());
		if(a == b){
		cout << "yes" << '\n';
		}
		else cout << "no" << '\n';	
		}
	}