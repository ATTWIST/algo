#include <bits/stdc++.h>
using namespace std;
int a[28];
int n = 0;
string s;
int main() {
  fill(&a[0],&a[28],-1);
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    n = s[i]; 
    if (a[n - 97] == -1) { 
      a[n - 97] = i; 
    }
  }
  for (int j = 0; j < 26; j++) {
    cout << a[j] << " ";
  }
  return 0;
}