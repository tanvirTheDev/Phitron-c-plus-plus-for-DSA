#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum;
    int min = INT_MAX;
    int val;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
             sum = arr[i] + arr[j] + j - i;
             if(min > sum){
                min = sum;
             }
        }
        
    }

    cout << min;
    return 0;
}
