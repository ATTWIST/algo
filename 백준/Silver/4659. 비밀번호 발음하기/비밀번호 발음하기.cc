#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s == "end")
            break;

        bool isValid = true;
        bool hasVowel = false;
        int consecutiveVowels = 0;
        int consecutiveConsonants = 0;
        char prev = '\0';

        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                hasVowel = true;
                consecutiveConsonants = 0;
                consecutiveVowels++;
                if (consecutiveVowels >= 3) {
                    isValid = false;
                    break;
                }
            } else {
                consecutiveVowels = 0;
                consecutiveConsonants++;
                if (consecutiveConsonants >= 3) {
                    isValid = false;
                    break;
                }
            }

            if (c == prev && c != 'e' && c != 'o') {
                isValid = false;
                break;
            }

            prev = c;
        }

        if (!hasVowel)
            isValid = false;

        if (isValid)
            cout << "<" << s << "> is acceptable." << '\n';
        else
            cout << "<" << s << "> is not acceptable." << '\n';
    }

    return 0;
}