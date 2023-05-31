#include <bits/stdc++.h>
using namespace std;
int a;
vector<int> v;
int main(){
	for(int i = 0; i < 10; i++){
		cin >> a;
		v.push_back(a % 42);
	}
	sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout << v.size() << '\n';
}