#include <bits/stdc++.h>
using namespace std;
int a;
string s,e;
string t = " ";
vector<string> split(string input,string delimiter){
	vector<string> ret;
	long long pos = 0;
	string tk = "";
	while((pos = input.find(delimiter)) != string::npos){
		tk = input.substr(0,pos);
		ret.push_back(tk);
		input.erase(0,pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}
int main(){
	cin >> a;
	string bufferflush;
    getline(cin, bufferflush);
	for(int i = 0; i < a; i++){
		cin >> s;
		e += char(*s.begin());
		e += char(*(s.end()-1));
		e += " ";
	}
	vector<string> kan = split(e,t);
	for(auto it : kan)cout << it << '\n';
	
}