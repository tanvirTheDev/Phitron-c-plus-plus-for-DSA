#include <bits/stdc++.h>
using namespace std;



int main(){

    // int a[5];
    int *a = new int[5]; // dynamically allocate an array of 5 integers
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++){
        cout << a[i] << ' ';
    }

return 0;
}