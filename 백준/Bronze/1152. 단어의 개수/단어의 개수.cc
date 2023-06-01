#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int a = 1;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (isspace(s[i])) {
			if (s.length() == 1) { cout << 0; return 0;}
			else if (i > 0 && isspace(s[i - 1])) { cout << 0; return 0;}
			else if (i == 0 || i == s.length() - 1) continue;
			else a++;
		}
	}
	cout << a;
	return 0;
}