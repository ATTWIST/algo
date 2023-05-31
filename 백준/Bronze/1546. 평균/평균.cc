#include <bits/stdc++.h>
using namespace std;
double c,j,k;
int a,b;
vector<int> v;
int main(){
	cin >> a;
	for(int i = 0; i < a; i++){
		cin >> b;
		v.push_back(b);
	}
	j = *max_element(v.begin(),v.end());
	k = accumulate(v.begin(),v.end(),0);
	c = (k/j*100/a);
	printf("%0.2lf",c);
	}