#include <bits/stdc++.h>
using namespace std;

class Student{
    public: 
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    };
    Student minmum;
    minmum.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (minmum.marks > a[i].marks)
        {
            minmum = a[i];
        }
        
        // cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    cout << minmum.name << " " << minmum.roll << " " << minmum.marks;
    return 0;
}