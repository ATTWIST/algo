#include<bits/stdc++.h>
using namespace std;
int a[10];
int cnt[10];
int b,c,d;
string mt;
int main(){
	for(int i = 0; i < 10; i++){
		a[i] = i;	
	}
	cin >> b >> c >> d;
	mt = to_string(b*c*d);
	for(int i = 0; i < mt.size(); i++){
		for(int j = 0; j < 10; j++){
			if((int)(mt[i] - '0') == a[j]){
				cnt[j]++;
			}
		}
		}
		for(auto it : cnt)cout << it << '\n';
	}