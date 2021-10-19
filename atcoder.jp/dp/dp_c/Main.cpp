#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> a(N), b(N), c(N);
    for(int i = 0; i < N; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    vector<vector<long long>> dp(N+1, vector<long long>(3));
    for(int i = 0; i < 3; i++) dp[0][i] = 0;

    for(int i = 1; i <= N; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                dp[i][j] = max(dp[i-1][1] + b[i-1], dp[i-1][2] + c[i-1]);
            }else if(j == 1){
                dp[i][j] = max(dp[i-1][2] + c[i-1], dp[i-1][0] + a[i-1]);
            }else{
                dp[i][j] = max(dp[i-1][0] + a[i-1], dp[i-1][1] + b[i-1]);
            }
        }
    }
    long long ans = max({dp[N][0], dp[N][1], dp[N][2]});
    cout << ans << endl;
}
        
