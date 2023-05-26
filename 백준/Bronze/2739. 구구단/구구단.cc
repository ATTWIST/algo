#include <bits/stdc++.h>
using namespace std;
int a;

int main(){
    cin >> a;
    if(a <= 9 && a >=1){
         for(int i = 1; i <= 9; i++){
        cout << a << " " << "*" << " " << i << " " << "=" << " " << a*i << '\n';
             
         }
    }
}