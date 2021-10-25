#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, MAX_V = 100100;
    long long W;
    cin >> N >> W;
    vector<long long> wei(N), val(N);
    for(int i = 0; i < N; i++){
        cin >> wei[i] >> val[i];
    }

    vector<vector<long long>> dp(N+1, vector<long long>(MAX_V+1, 1234567890));
    dp[0][0] = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < MAX_V; j++){
            if(j - val[i] >= 0){
                if(dp[i+1][j] > dp[i][j-val[i]] + wei[i]) dp[i+1][j] = dp[i][j-val[i]] + wei[i];
            }
            dp[i+1][j] = min(dp[i+1][j],dp[i][j]);
        }
    }
    long long ans = 0;
    for(int i = 0; i < MAX_V; i++){
        if(dp[N][i] <= W) ans = i;
    }
    cout << ans <<endl;
}
