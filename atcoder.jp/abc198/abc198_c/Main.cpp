#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n, a, b,d,m;
    int n1;
    cin >> n >> a >> b;
    d = sqrt(a * a + b * b);
    if (n <= d)
    {
        m = d / n;
        n1 = d / n;
        if (n1 == m)
            cout << n1;
        else
            cout << n1 + 1;
    }
    else
        cout << "2";
}