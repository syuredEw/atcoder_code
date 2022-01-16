#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    long double l = 0.0, r = 10000000;

    while(r - l > 0.00000000001){
        long double mid = (r+l)/2.0;
        long double dig = A * mid + B * sin(C * mid * 3.141592653589793);
        if(dig < 100.0) l = mid;
        else r = mid;
        //cout << dig << endl;
    } 
    cout << setprecision(13) << l << endl;
}
