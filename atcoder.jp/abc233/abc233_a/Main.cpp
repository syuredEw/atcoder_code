#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;

    Y -= X;
    int cnt;
    cnt = Y / 10;
    if(Y < 0){
        cout << 0 << endl;
    }else if(Y % 10 != 0){
        cout << cnt + 1 << endl;
    }else{
        cout << cnt << endl;
    }
    return 0;
}