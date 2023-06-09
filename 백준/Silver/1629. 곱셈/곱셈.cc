#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;

ll mc(ll a, ll b){
	if(b == 1)return a%c;
	ll rt = mc(a,b/2);
	rt = (rt*rt)%c;
	if(b%2)rt = (rt*a)%c;
	return rt;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << mc(a,b) << "\n";
}
    