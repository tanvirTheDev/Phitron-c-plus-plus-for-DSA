#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
    cin >> s;
    // cout << s.size();
    if (s.size() <= 10){
        cout << s << endl;
    }else{
        s = string(1, s[0]) + to_string(s.size() - 2) + string(1, s.back());
        cout << s << endl;
    }
    }
    
    
    
    // cout << s;
    return 0;
}