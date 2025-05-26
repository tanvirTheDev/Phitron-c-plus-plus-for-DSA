#include <bits/stdc++.h>
using namespace std;
int *p;

// void fun() {
//     int x = 10;
//     p = &x; // p points to a local variable x
//     cout << "Value of x: " << *p << endl; // prints 10
// }

// // stack memory

// int main(){

//     fun();
//     cout << "Value pointed by p: " << *p << endl; // Undefined behavior
// }





// dyanamic variable

void fun() {
    int *x = new int; // dynamically allocate memory
    *x = 10; // assign value to dynamically allocated memory
    p = x; // make p point to the dynamically allocated memory
    cout << "Value of x: " << *p << endl; // prints 10
}

// stack memory

int main(){

    fun();
    cout << "Value pointed by p: " << *p << endl; // Undefined behavior
}