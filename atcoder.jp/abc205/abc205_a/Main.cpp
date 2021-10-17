#include <bits/stdc++.h>
using namespace std;

int main(void){
    int A, B;
    cin >> A >> B;
    long double ans = A * B / (long double)100;
    cout << fixed <<setprecision(10) << ans << endl;
    return 0;
}