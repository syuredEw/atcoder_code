#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3 = (y1 - y2) + x2;
    int y3 = -(x1 - x2) + y2;
    cout << x3 << " " << y3 << " ";
    cout << (y2 - y3) + x3 << " " << -(x2 - x3) + y3 << "\n";
    
}

