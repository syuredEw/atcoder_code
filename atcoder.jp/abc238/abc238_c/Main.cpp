#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, MOD = 998244353;
    cin >> N;
    long long ans = 0;

    for(int i = 1; i <= 18; i++){
        long long n = pow(10LL, i);
        long long n1 = pow(10LL, i-1);
        if(n-1 < N){
            long long a = (n - n1) % MOD, b = (n+1 -n1) % MOD;
            ans += a * b / 2;
            //if(i == 1) ans -= 10;
            ans %= MOD;

        }else{
            //cout << (N - n1 + 1) << endl;
            long long a = (N - n1 + 1) % MOD, b = (N - n1 + 2) % MOD;
            ans += a * b / 2;
            ans %= MOD; 
            break;
        }
        //cout << ans << endl;
    }
    cout << ans << endl;
}
