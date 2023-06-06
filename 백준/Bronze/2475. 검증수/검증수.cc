#include<bits/stdc++.h>
using namespace std;
int a,sum;

int main(){
	for(int i = 0; i < 5; i++){
		cin >> a;
		sum += (int)pow(a,2);
	}
	cout << sum%10;
}