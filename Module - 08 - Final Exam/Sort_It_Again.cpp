#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool comp(Student l, Student r) {
    if (l.eng_marks != r.eng_marks)
     {
           return l.eng_marks > r.eng_marks;   
     }
    else if (l.math_marks != r.math_marks)
        {
            return l.math_marks > r.math_marks;  
        } 
        else{
            return l.id < r.id;   
        }                   
}
    



int main()
{
    int n;
    cin >> n;
    Student a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    };

    sort(a, a + n, comp);
   
    for (int i = 0; i < n; i++)
    {
         cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}