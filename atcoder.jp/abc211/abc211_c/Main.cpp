#include <bits/stdc++.h>
using namespace std;
vector<char> G;
vector<bool> seen;
int main(){
    string S; cin >> S;
    string T = "chokudai";
    int n = S.size();
    long long dp[n+1][8+1];
    for(int i = 0; i <= n; i++) dp[i][0] = 1;
    for(int j = 1; j <= 8; j++) dp[0][j] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 8; j++){
            if(S[i] != T[j]) dp[i+1][j+1] = dp[i][j+1];
            else dp[i+1][j+1] = dp[i][j+1] + dp[i][j];
            if(dp[i+1][j+1] > 1000000007) dp[i+1][j+1] %= 1000000007;
        }
    }
    
    cout << dp[n][8] << endl;
}