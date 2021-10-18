#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    int dp[N+5];
    memset(dp, 123456789, sizeof(dp));
    dp[0] = 0;
    for(int i = 0; i < N; i++){
        dp[i] = min(dp[i], dp[i-1] + abs(a[i] - a[i-1]));
        if(i > 1) dp[i] = min(dp[i-2] + abs(a[i-2] - a[i]), dp[i]);
    }
    cout  << dp[N-1] << endl;
}
