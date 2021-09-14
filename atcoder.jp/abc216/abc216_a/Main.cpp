#include <bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >> x;
    int y = (x - (int)x) * 10.1;
    //cout << x << y << endl;
    if(0 <= y && y <= 2) cout << (int)x << "-" <<endl;
    else if(3 <= y && y <= 6) cout <<(int)x << endl;
    else cout <<(int)x << "+" << endl; 
}