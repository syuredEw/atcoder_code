#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> dp(N+1, 123456789);
    dp[0] = 0;
    for(int i = 1; i <= N; i++){
        for(int pow6 = 1; pow6 <= i; pow6*= 6){
            dp[i] = min(dp[i], dp[i - pow6] + 1);
        }
        for(int pow9 = 1; pow9 <= i; pow9 *= 9){
            dp[i] = min(dp[i], dp[i - pow9] + 1);
        }
    }
    cout << dp[N] <<endl;
}   
