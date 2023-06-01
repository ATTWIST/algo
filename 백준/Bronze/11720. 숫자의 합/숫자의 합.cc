#include <bits/stdc++.h>
using namespace std;
int a,b;
int sum;

int main(){
    cin >> a;
    vector<char> v(a);

    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
        b = (int)v[i] - '0';
        sum += b;
    }
    cout << sum;

}