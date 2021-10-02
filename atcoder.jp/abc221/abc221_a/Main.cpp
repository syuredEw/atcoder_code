#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int C = abs(B - A);
    long long ans = pow(32, C);
    cout << ans << endl; 
    return 0;
}