#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
  while (t--)
  {
     string s;
    cin >> s;
    int sum_one = 0, sum_two = 0;
    for (int i = 0; i < 3; i++)
    {
        sum_one += s[i] - '0';
    }
    for (int i = 3; i < 6; i++)
    {
        sum_two += s[i] - '0';
    }
    // cout << sum_one << " " << sum_two;
    if(sum_one == sum_two)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
  
    
    return 0;
}