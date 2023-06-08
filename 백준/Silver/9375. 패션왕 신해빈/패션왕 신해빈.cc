#include <bits/stdc++.h>
using namespace std;
int a,b;
string s,s1;
int sum;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a;
	for(int i = 0; i < a; i++){
		map<string,int> pa;
		cin >> b;
		for(int j = 0; j < b; j++){
			cin >> s >> s1;
			pa[s1]++;
		}
		int c = 1;
		for(auto it : pa){
			c *= (it.second+1);
		}
		c--;
		cout << c << '\n';
	}
	return 0;
}