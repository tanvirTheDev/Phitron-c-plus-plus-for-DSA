#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
    string s, t;
    cin >> s >> t;
    int len = min(s.size(), t.size());
    for (int i = 0; i < len; ++i) 
    {
        cout << s[i] << t[i];
    }
    if (s.size() > len)
    {
        cout << s.substr(len);
    }else if (t.size() > len)
    {
        cout << t.substr(len);
    }
    cout << endl;
    }
    
    

    return 0;
}