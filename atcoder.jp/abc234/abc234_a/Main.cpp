#include <bits/stdc++.h>
using namespace std;

long long func(int t){
    return t * t + 2 * t + 3;
}
int main()
{
    long long t;
    cin >> t;

    cout << func(func(func(t) + t) + func(func(t))) << endl;

}
