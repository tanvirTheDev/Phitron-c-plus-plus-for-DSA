#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int Anton = count(s.begin(), s.end(), 'A');
    int Danik = count(s.begin(), s.end(), 'D');
    if (Anton > Danik) cout << "Anton";
    else if(Anton == Danik) cout << "Friendship";
    else cout << "Danik";
    

    
    
    return 0;
}