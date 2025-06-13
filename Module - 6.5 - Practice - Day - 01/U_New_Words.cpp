#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
    // transform(s.begin(), s.end(), s.begin(), ::toupper);
    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        if (s[i] == 'E') countE++;
        else if (s[i] == 'G') countG++;
        else if (s[i] == 'Y') countY++;
        else if (s[i] == 'P') countP++;
        else if (s[i] == 'T') countT++;
        // or we can use count built in fuciton
    }
    int result = min({countE, countG, countY, countP, countT});
    cout << result << endl;
    return 0;
}