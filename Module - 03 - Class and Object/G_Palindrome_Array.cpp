#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;
    bool isPalindrome = true;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
    {
        cout << "YES"; // It's a palindrome
    }
    else
    {
        cout << "NO";  // Not a palindrome
    }

    return 0;
}
