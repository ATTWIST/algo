#include <bits/stdc++.h>
using namespace std;
int a,b,tp;
int c[100004];
int ret = -100000004;
int main(){
	cin >> a >> b;
	for(int i = 1; i <= a; i++){
		cin >> tp;
		c[i] = c[i-1] + tp;
		}
	for(int i = b; i <= a; i++){
		ret = max(ret, c[i] - c[i - b]);
	}
	cout << ret << '\n';
	return 0;	
}