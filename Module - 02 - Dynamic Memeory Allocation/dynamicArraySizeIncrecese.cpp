#include <bits/stdc++.h>
using namespace std;

int main(){
    int *a = new int[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }


    int *b = new int[5];
for(int i = 0; i < 3; i++){
    b[i] = a[i]; // copy elements from a to b
}
b[3] = 0; // add a new element at the end
b[4] = 70; // add another new element at the end
delete[] a; // free the memory allocated for a
for(int i = 0; i < 5; i++){
    cout << b[i] << ' ';
}
return 0;
}
