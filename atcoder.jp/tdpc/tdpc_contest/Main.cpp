#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> p(N);
    for(int i = 0; i < N; i++){
        cin >> p[i];
    }
    int W = 10000;
    vector<vector<bool>> dp(N+1, vector<bool>(W+1, false));
    dp[0][0] = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < W; j++){
            if(!dp[i][j]) continue;
            dp[i+1][j] = true;
            if(j + p[i] <= W) dp[i+1][j+p[i]] = true;
        }
    }
    
    int ans = 0;
    for(int j = 0; j <= W; j++){
        if(dp[N][j]) ans++;
    }
    cout << ans << endl;
}
