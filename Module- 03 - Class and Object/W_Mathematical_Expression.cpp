#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if(s == '+'){
        int addition = a + b;
        if(a + b == c){
            cout << "Yes";
        }else cout << addition;
    }
     if(s == '-'){
        int subtitute = a - b;
        if(a - b == c){
            cout << "Yes";
        }else cout << subtitute;
    }
     if(s == '*'){
        int multipication = a * b;
        if(a * b == c){
            cout << "Yes";
        }else cout << multipication;
    }
    return 0;
}