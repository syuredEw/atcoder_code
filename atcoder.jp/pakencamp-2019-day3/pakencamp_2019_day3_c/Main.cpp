#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    long long ans = 0, su = 0;
    int sum[N][M];
    int score;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> score;
            sum[i][j] = score;
        } 
    }
    for(int i = 0; i < M; i++){
        for(int j = i+1; j < M; j++){
            su = 0;
            for(int k = 0; k < N; k++){
                su += max(sum[k][i], sum[k][j]);
                ans = max(su, ans);
            }
        }
        //cout << ans << endl;
    }
    
    
    cout << ans << endl;
}