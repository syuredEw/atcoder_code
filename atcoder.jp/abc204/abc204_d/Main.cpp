#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> T(N);
    long long sum = 0;
    for(int i = 0; i < N; i++){
        cin >> T[i];
        sum += T[i];
    }
    int ans = sum;
    sort(T.begin(), T.end());

    vector<vector<bool>> dp(N+10, vector<bool>(sum+10, false));
    dp[0][0] = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= sum; j++){
            dp[i+1][j] = dp[i+1][j]|dp[i][j];
            if(j >= T[i]) dp[i+1][j] = dp[i+1][j]|dp[i][j-T[i]];
        }
    }
    int start;
    if(sum % 2 == 0){
        start = sum / 2;
    }else{
        start = sum / 2 + 1;
    }
    for(int i = start; i < sum; ++i){
        if(dp[N][i]){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}