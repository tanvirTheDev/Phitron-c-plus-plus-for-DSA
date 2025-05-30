// Why we need to dynamic obj
#include <bits/stdc++.h>

using namespace std;

class Student{

    public:
    char name[100];
    int roll;
    double gpa;

    Student(const char* n, int r, double g){
        strcpy(this->name, n);
        this->roll = r;
        this->gpa = g;
    }

   
};

//  Student* func(){
//         Student shakib("shakib", 75, 4.67);
//         Student* p = &shakib;
//         return p;
//     }

 Student* func(){
        Student* sh = new Student("shakib", 75, 4.67);
       
        return sh;
    }


int main(){

    Student* obj = new Student("tamim", 33, 2.67);
    Student* p = func();
       cout << obj->name << " " << obj->roll << " " << obj->gpa;
        cout << p->name << " " << p->roll << " " << p->gpa;
    return 0;
}