#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
vector<string> a;
int dp[1100][1100];
int H, W;

void add(int &a, int b){
    a += b;
    if(a >= MOD) a -= MOD;
}

int main(){
    cin >> H >> W;
    a.resize(H);
    for(int i = 0; i < H; i++){
        cin >> a[i];
    }

    dp[0][0] = 1;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(i + 1 < H && a[i+1][j] == '.') add(dp[i+1][j], dp[i][j]);
            if(j + 1 < W && a[i][j+1] == '.') add(dp[i][j+1], dp[i][j]);
        }
    }
    cout << dp[H-1][W-1] << endl;

}