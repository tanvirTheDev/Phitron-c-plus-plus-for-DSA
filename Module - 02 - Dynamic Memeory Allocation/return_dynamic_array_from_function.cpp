#include <bits/stdc++.h>
using namespace std;

int* fun(){
    int *a = new int[5]; // dynamically allocate an array of 5 integers
    for(int i = 0; i < 5; i++){
        cin >> a[i]; // read values into the array
    }
    return a; // return the pointer to the array
}

int main(){
    int *arr = fun(); // call the function and get the pointer to the array
    for(int i = 0; i < 5; i++){
        cout << arr[i] << ' '; // print the values of the array
    }
    return 0;
}