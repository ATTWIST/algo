#include <bits/stdc++.h>
using namespace std;
int a,b;

int main(void){
    cin >> a >> b;
    if(a<b){
        cout << "<" << '\n';
    }
    else if(a>b){
        cout << ">" << '\n';
    }
    else if(a==b){
        cout << "==" << '\n';
    }
    return 0;
}