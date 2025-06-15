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

bool comp(Student l, Student r){
    int total_l = l.math_marks + l.eng_marks;
    int total_r = r.math_marks + r.eng_marks;
    if (total_l != total_r) return total_l > total_r; 
    else return l.id < r.id; 
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