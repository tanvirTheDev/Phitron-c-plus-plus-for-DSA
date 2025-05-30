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

 Student func(){
        Student shakib("shakib", 75, 4.67);
        return shakib;
    }


int main(){

    Student tanvir("tanvir", 1, 5.00);
    Student obj = func();
       cout << obj.name << " " << obj.roll << " " << obj.gpa;
    return 0;
}