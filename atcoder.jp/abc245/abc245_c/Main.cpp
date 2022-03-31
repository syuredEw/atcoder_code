#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long K;
    cin >> N >> K;
    vector<long long > A(N), B(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    vector<vector<bool>> dp(N + 1, vector<bool> (3, false));
    dp[0][0] = true;
    dp[0][1] = true;
    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < 2; j++){
            if(dp[i][j] && j == 0){
                if(abs(A[i] - A[i+1]) <= K) dp[i+1][0] = true;
                if(abs(A[i] - B[i+1]) <= K) dp[i+1][1] = true;
            }
            if(dp[i][j] && j == 1){
                if (abs(B[i] - A[i + 1]) <= K)
                    dp[i + 1][0] = true;
                if (abs(B[i] - B[i + 1]) <= K)
                    dp[i + 1][1] = true;
            }
        }
    }
   // cout << dp[N-1][0] << " " << dp[N-1][1] << endl;
    if(dp[N-1][0] || dp[N-1][1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}