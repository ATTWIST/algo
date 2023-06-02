#include <bits/stdc++.h>
using namespace std;
int csar[6] = {1,1,2,2,2,8};
int cs[6];
int main(){
	for(int i = 0; i < 6; i++){
		cin >> cs[i];
	cs[i] = csar[i] - cs[i];
	}
	for(auto it : cs)cout << it << '\n';
}