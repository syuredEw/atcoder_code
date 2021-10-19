#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, W;
    cin  >> N >> W;
    vector<int> val(N), wei(N);
    vector<vector<long long >> dp(N+1, vector<long long >(W+1));
    for(int i = 0; i < N; i++){
        cin >> wei[i] >> val[i];
    }
    for(int i = 0; i <= W; i++) dp[0][i] == 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= W; j++){
            if(j - wei[i] >= 0){
                dp[i+1][j] = max(dp[i][j], dp[i][j - wei[i]] + val[i]);
            }else{
                dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
            }
        }
        //cout << dp[i][W] << endl;
    }
    cout << dp[N][W] <<endl;
}
