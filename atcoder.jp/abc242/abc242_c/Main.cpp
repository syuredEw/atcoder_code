#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long MOD = 998244353;
    vector<vector<long long>> dp(N+1, vector<long long>(10, 0));

    for(int i = 0; i < 10; i++) dp[0][i] = 1;

    for(int i = 0; i < N; i++){
        for(int j = 1; j < 10; j++){
            for(int k = max(j - 1, 1); k <= min(j+1, 9); k++){
                dp[i+1][j] += dp[i][k];
                dp[i+1][j] %= MOD;
            }
        }
    }
    long long ans = 0;
    for(int i = 0; i < 10; i++){
        ans += dp[N-1][i];
        ans %= MOD;
        //cout << dp[N][i] << " ";
    }
    cout << ans << endl;

}