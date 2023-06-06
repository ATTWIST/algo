#include <bits/stdc++.h>
using namespace std;
int a;
string star,s_m,s_u,s;
int main(){
	cin >> a;
	cin >> star;
	int pos = star.find('*');
	s_m = star.substr(0,pos);
	s_u = star.substr(pos+1);
	for(int i = 0; i < a; i++){
		cin >> s;
		if(s_m.size() + s_u.size() > s.size()){
            cout << "NE\n";
        }else{
		if(s_m == s.substr(0, s_m.size()) && s_u == s.substr(s.size() - s_u.size())) cout << "DA\n";
        else cout <<"NE\n";
	}
}
}
	