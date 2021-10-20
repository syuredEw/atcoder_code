#include <bits/stdc++.h>
using namespace std;

int main(){
    int W;
    int N, K;
    cin >> W;
    cin >> N >> K;
    vector<int> A(N+1), B(N+1);
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(K+1, vector<int>(W+1, 0)));

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= K; j++){
            for(int k = 0; k <= W; k++){
                if(k - A[i-1] >= 0){
                    dp[i][j][k] = max({dp[i-1][j][k], dp[i-1][j-1][k], dp[i-1][j-1][k-A[i-1]] + B[i-1]});
                }
                else{
                    dp[i][j][k] = max(dp[i-1][j][k], dp[i-1][j-1][k]);
                }
            }
        }
    }
    cout << dp[N][K][W] <<endl;
}
