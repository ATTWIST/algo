#include <bits/stdc++.h>
using namespace std;;
int T;
int sum = 0;

int main(){
    cin >> T;
    for(int i = 0; i < T; i++){
        sum += T-i;
    }
    cout << sum << '\n';
        
}