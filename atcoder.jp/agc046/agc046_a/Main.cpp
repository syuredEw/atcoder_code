#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int GCD = gcd(X, 360);
    int lcm = 360  / GCD;
    cout << lcm << endl;
}
