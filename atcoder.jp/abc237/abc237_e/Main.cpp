#include <bits/stdc++.h>
using namespace std;
vector<long long> H;
vector<long long> dp;
void dfs(const vector<vector<long long>> &G, int v){
    

    for(int nv : G[v]){
        long long sub = H[v] - H[nv];
        if(sub < 0) sub *= 2;

        if(dp[nv] < dp[v] + sub){
            dp[nv] = dp[v] + sub;
            dfs(G, nv);
        }
    }
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<long long>> G(N);
    H.assign(N, 0);

    dp.assign(N, -123455689);
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }
    dp[0] = 0;
    for(int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    dfs(G, 0);
    long long ans = -123445677;
    for(int i = 0; i < N; i++){
        if(ans < dp[i]) ans = dp[i];
    }
    cout << ans << endl;
}
