#include<bits/stdc++.h>
using namespace std;
int N,b;
vector<int> v;
int main()
{
	for(int i = 0; i < 9; i++){
		scanf("%d ",&b);
		v.push_back(b);
	}
	cout << *max_element(v.begin(), v.end()) << '\n';
	cout << max_element(v.begin(),v.end()) - v.begin() +1  << '\n';
	
}