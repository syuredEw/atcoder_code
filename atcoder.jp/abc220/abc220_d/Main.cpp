#include <bits/stdc++.h>
using namespace std;

int main(){
   int N;
   cin >> N;
   long long MOD = 998244353;
   vector<int> A(N+1);
   for(int i = 1; i <= N; i++){
       cin >> A[i];
   }
   vector<vector<long long>> dp(N+1, vector<long long>(11, 0));
   dp[1][A[1]] = 1;
   for(int i = 1; i < N; i++){
       for(int j = 0; j < 10; j++){
           int sum = (A[i+1] + j) % 10;
           int kake = (A[i+1] * j) % 10;
           dp[i+1][sum] += dp[i][j]; 
           dp[i+1][kake] += dp[i][j];
           dp[i+1][sum] %= MOD;
           dp[i+1][kake] %= MOD;
       }
   }
   for(int i = 0; i < 10; i++){
       cout << dp[N][i] << endl;
   }
}
