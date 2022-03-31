#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V, A, B, C;
    cin >> V >> A >> B >> C;
    int sum = A + B + C;
    V %= sum;
    if(V < A){
        cout << "F" << endl;
    }else if(V < A + B){
        cout << "M" << endl;
    }else{
        cout << "T" << endl;
    }
}