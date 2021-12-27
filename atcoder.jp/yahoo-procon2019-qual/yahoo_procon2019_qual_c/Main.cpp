#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long K, A, B;
    cin >> K >> A >> B;
    if(A >= B - 1){
        cout << K + 1 << endl;
    }else{
        long long ans;
        K -= (A - 1);
        ans = A + K / 2 * (B - A);
        if(K % 2 != 0) ans++;
        cout << ans << endl;
    }
}
