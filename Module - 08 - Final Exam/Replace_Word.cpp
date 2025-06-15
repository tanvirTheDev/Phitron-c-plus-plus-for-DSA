#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s, x;
    cin >> s >> x;
    int xLength = x.size();
    int findSize = s.find(x);

   while (findSize != -1)
   {
     s.replace(findSize, xLength, "#"); 
      findSize = s.find(x, findSize + 1);
   }
    
    cout << s << endl;
    }
    
    return 0;
}