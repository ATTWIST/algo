#include <bits/stdc++.h>
using namespace std;
int a,b,c,cnt;
int ig[15004];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b;
	for(int i = 1; i <= a; i++){
		cin >> c;
		ig[i] = c;}
	for(int i = 1; i <= a; i++){
		for(int j = i + 1; j <= a; j++){
			if(ig[i] + ig[j] == b)cnt++;
		}
}
cout << cnt;
}