#include<bits/stdc++.h>
using namespace std;
int a;
int ar[8];
int grt[8] = {1,2,3,4,5,6,7,8};
int lett[8] = {8,7,6,5,4,3,2,1};
int sum,sum1;
int main(){
	for(int i = 0; i < 8; i++){
		cin >> a;
		ar[i] = a;
	}
	for(int i = 0; i < 8; i++){
	if(ar[i] == grt[i])sum++;
	if(ar[i] == lett[i])sum1++;
	}
	if(sum == 8)cout << "ascending";
	else if(sum1 == 8)cout << "descending";
	else cout << "mixed";
}
