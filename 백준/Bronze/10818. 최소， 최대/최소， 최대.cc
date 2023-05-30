#include<bits/stdc++.h>
using namespace std;
int N,b;
vector<int> v;
int main()
{
	cin >> N;
	for(int i = 1; i <= N; i++){
		scanf("%d ",&b);
		v.push_back(b);
	}
	cout << *min_element(v.begin(), v.end()) << '\n';
	cout << *max_element(v.begin(), v.end()) << '\n';
	
}