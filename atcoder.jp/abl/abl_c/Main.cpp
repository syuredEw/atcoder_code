#include <bits/stdc++.h>
using namespace std;
vector<bool> seen;
void dfs(const vector<vector<int>> &G, int v){
    seen[v] = true;
    for(auto nv : G[v]){
        if(seen[nv]) continue;
        dfs(G, nv);
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    seen.assign(N, false);
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(seen[i]) continue;
        dfs(G, i);
        cnt++;
    }
    cout << cnt - 1 << endl;
    
}
