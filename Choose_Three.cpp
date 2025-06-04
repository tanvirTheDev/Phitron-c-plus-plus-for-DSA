#include <bits/stdc++.h>
using namespace std;

int main()
  
{
     int T;
    cin >> T;
  while (T--){
     int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == s) flag = 1;
            }
            
        }
        
    }
    

    if (flag == 1)
    {
        cout << "YES" << endl;
    }else cout << "NO" << endl;
  }
   
    
    return 0;
}