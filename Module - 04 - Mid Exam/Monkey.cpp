#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        string word = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            }
        }

        // cout << word;
        sort(word.begin(), word.end());
        cout << word << endl;
    }

    return 0;
}
