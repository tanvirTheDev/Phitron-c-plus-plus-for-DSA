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


int main(){

    Student tanvir("tanvir", 01, 5.00);

       cout << tanvir.name << " " << tanvir.roll << " " << tanvir.gpa;
    return 0;
}