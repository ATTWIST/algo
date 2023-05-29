#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b;
int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	while(!(cin >> a >> b).eof()){
        if(a > 0 && b < 10 && b > 0 && a < 10){
            cout << a+b << '\n';
        }
        else break;
	}
}	