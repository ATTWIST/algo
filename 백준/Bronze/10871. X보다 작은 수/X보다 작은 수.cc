#include<bits/stdc++.h>
using namespace std;
int N,X,b;
vector<int> v;
int main()
{
	cin >> N >> X;
	for(int i = 0; i < N; i++){
		scanf("%d ",&b);
		if(b < X)v.push_back(b);
	}
	for(auto t : v)cout << t << '\n';
	
}