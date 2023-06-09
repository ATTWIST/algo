#include <bits/stdc++.h>
using namespace std;
int c,b;
string s;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> c;
    for(int i = 0; i < c; i++){
    	cin >> s;
    	stack<char> st;
    	for(char a : s){
    		if(st.size() && st.top() == a)st.pop();
    		else st.push(a);
		}
		if(st.size() == 0)b++;
	}
	cout << b << '\n';
}
    