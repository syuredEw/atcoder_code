#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    if(c == 0){
        cout << "=" <<endl;
        return 0;
    }
    if(c % 2 == 0){
        if(abs(a) < abs(b)){
            cout << "<" << endl;
        }
        else if(abs(a) == abs(b)){
            cout << "=" << endl;
        }
        else{
            cout << ">" <<endl;
        }
    }
    else{
        if(a < b){
            cout << "<" << endl;
        }
        else if(a == b){
            cout << "=" << endl;
        }
        else{
            cout << ">" <<endl;
        }
    }
    return 0;
}