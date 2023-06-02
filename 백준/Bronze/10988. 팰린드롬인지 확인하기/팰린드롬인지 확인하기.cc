#include <bits/stdc++.h>
using namespace std;
string a;
char b,c;
vector<char> v;
int main(){
	cin >> a;
	for(int i = 0; i < a.size(); i++){
		b = char(*(a.begin()+i));
		c = char(*(a.end()-i-1));
		if(b == c){
			v.push_back(b);
		} 
	}
	if(v.size() == a.size())cout << 1;
	else cout << 0;
}		