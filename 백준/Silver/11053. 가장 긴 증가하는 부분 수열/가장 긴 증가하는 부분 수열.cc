#include <bits/stdc++.h> 
int n, a[1004], cnt[1004], ret; 
using namespace std;  
int main(){
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    for(int i = 0; i < n; i++){
        int mx = 0; 
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && mx < cnt[j]) mx = cnt[j];
        }
        cnt[i] = mx + 1; 
        ret = max(ret, cnt[i]);
    }
    cout << ret << "\n"; 
}