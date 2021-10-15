#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    long long K;
    cin >> A >> B >> K;
    vector<vector<long long>> dp(A+1, vector<long long>(B+1));
    dp[0][0] = 1;
    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            if(i > 0) dp[i][j] += dp[i-1][j];
            if(j > 0) dp[i][j] += dp[i][j-1];
           // cout << dp[i][j] << " ";
        }
       // cout << endl;
    }
    while (A > 0 and B > 0)
    {
        if(K <= dp[A-1][B]){
            cout << 'a';
            A--;
        }
        else{
            K -= dp[A-1][B];
            cout << 'b';
            B--;
        }
    }
    cout << string(A, 'a');
    cout << string(B, 'b');
    return 0;
}