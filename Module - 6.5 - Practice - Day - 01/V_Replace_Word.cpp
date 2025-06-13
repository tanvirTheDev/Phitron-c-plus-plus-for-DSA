#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
  size_t findSize = s.find("EGYPT");
    while (findSize != string::npos)
    {
        s.replace(findSize, 5, " ");         // Replace "EGYPT" with space
        findSize = s.find("EGYPT", findSize + 1);  // Find next "EGYPT"
    }
    
    cout << s;
    return 0;
}