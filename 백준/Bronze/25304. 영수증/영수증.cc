#include <bits/stdc++.h>
using namespace std;
long long X;
int a,b,Y;
int sum;

int main()
{
    cin >> X;
    cin >> Y;
    for(int i = 0; i < Y; i++){
        cin >> a;
        cin >> b;
        sum += a*b;
    }
    if(X == sum)
    cout << "Yes";
    else cout << "No";
    }