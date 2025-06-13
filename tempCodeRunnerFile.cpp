#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int findSize = s.find("EGYPT");
    cout << s.replace(findSize, 5," ");
    // cout << s;
    return 0;
}