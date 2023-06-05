#include <bits/stdc++.h>
using namespace std; 
int a,b,c;
int d,f;
int cnt[100];
int sum;

int main(){
	cin >> a >> b >> c;
	for(int i = 0; i < 3; i++){
		cin >> d >> f;
		for(d; d < f; d++){
			cnt[d]++;
		}
	}
	for(int i = 0; i < 100; i++){
		if(cnt[i] == 1){
			sum += a;
		}
		else if(cnt[i] == 2){
			sum += b*2;
		}
		else if(cnt[i] == 3){
			sum += c*3;
		}
	}
	cout << sum;
	return 0;
}