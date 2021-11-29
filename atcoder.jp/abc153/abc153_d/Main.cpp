#include <bits/stdc++.h>
using namespace std;

int main(){
    long long H, ans = 0;
    cin >> H;
    int cnt = 0;

    while (H != 0)
    {
        H /= 2;
        ans += (pow(2, cnt));
        cnt++;
    }
    cout << ans << endl;
    
}