#include <bits/stdc++.h>
using namespace std;
int n,c,a[1004];
vector<pair<int,int>> v;
map<int,int> mp,bd;

bool st(pair<int,int> a,pair<int,int> b){
	if(a.first == b.first){
		return bd[a.second] < bd[b.second];
	}
	return a.first > b.first;
}

int main(){
	cin >> n >> c;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
		if(bd[a[i]] == 0){
			bd[a[i]] = i+1;
		}
    }
		for(auto it : mp){
			v.push_back({it.second,it.first});
		}
	sort(v.begin(),v.end(),st);
	
	for (auto i : v) {
        for (int j = 0; j < i.first; j++) {
            cout << i.second << " ";
        }
    }
}