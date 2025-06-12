#include <bits/stdc++.h>
using namespace std;

class Student{
    public : 
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total(){
        cout << "Total Number: " << name << " = " << math + english;
    }
};

int main()
{
    Student shakib("Shakib", 4, 45, 45);
    shakib.total();
    return 0;
}