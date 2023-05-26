#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a,b;
    cin >> a >> b;
    cout << (b%10)*a << '\n';
    cout << ((b/10)-(b/100)*10)*a << '\n';
    cout << (b/100)*a << '\n';
    cout << b*a << '\n';
    return 0;
}