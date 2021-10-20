#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> num(N);
    for(int i = 0; i < N; i++){
        cin >> num[i];
    }
    vector<vector<long long>> dp(N+1, vector<long long>(22, 0));
    dp[0][num[0]] = 1;
    for(int i = 1; i < N-1; i++){
        for(int j = 0; j <= 20; j++){
            if(j - num[i] >= 0){
                dp[i][j] += dp[i-1][j - num[i]]; 
            }
            if(j + num[i] <= 20){
                dp[i][j] += dp[i-1][j + num[i]];
            }
        }
    }
    cout << dp[N-2][num[N-1]] << endl;

}
