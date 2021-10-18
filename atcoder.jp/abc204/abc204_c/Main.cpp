#include <bits/stdc++.h>
using namespace std;
int ans = 0;
vector<bool> seen;
void dfs(const vector<vector<int>> &G, int v){
    seen[v] = true;
    for(auto next_v : G[v]){
         if(seen[next_v]) continue;
        dfs(G, next_v);
    }
    //cout << ans << endl;
}


int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
    }
    long long ans = 0;
    for(int i = 0; i < N; i++){
        seen.assign(N, false);
        //cout << N << endl;
        dfs(G, i);
        for(int j = 0; j < N; j++){
            if(seen[j]) ans++;
        }
        //cout << ans << endl;
    }
    cout << ans  << endl;
}