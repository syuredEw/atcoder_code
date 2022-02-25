#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long X;
    cin >> X;
    long long ans = 0, value = 100;
    while(X > value){
        ans++;
        value += value / 100;        
    }
    cout << ans << endl;
}