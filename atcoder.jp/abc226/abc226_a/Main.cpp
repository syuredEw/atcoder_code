#include <bits/stdc++.h>
using namespace std;

int main(){
    long double x;
    cin >> x;
    int X = int(x);
    x -= X;
    if(0.5 > x) cout << X <<endl;
    else cout << X + 1 << endl;
}
