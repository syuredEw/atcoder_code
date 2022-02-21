#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b;
    long double x;
    cin >> a >> b >> x;

    long double half = a * a * b / 2;
    double ans = 0;

    if(x < half) ans = atan(a * b * b / (2.0 * x));
    else ans = atan((2.0 * b - 2.0 * x / (a * a)) / a);

    ans = ans / M_PI * 180;
    printf("%.10f\n", ans);
}
