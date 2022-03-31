#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d <= a) cout << 1 << endl;
    else if(a + 1 <= d && d <= b)
        cout << std::setprecision(10) <<c / (b - a) << endl;
    else cout << 0 << endl;
}