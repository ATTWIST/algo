#include<bits/stdc++.h>
using namespace std;
int a,b,c;
vector<int> v;
int main()
{
	cin >> a;
	for(int i = 0; i < a; i++){
		scanf("%d ",&b);
		v.push_back(b);
	}
	cin >> c;
	cout << count(v.begin(), v.end(), c) << '\n';
}