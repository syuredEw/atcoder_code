#include <bits/stdc++.h>
using namespace std;
vector<bool> seen;
bool ok;
void dfs(const vector<vector<int>> &G, int v){
    seen[v] = true;
    int cnt = 0;
    for(auto nv : G[v]){
        if(seen[nv]){
            cnt++;
            continue;
        }
        dfs(G, nv);
    }
    if(cnt > 1) ok = false;
    return;
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
    
    ok = true;
    seen.assign(N, false);
    for(int i = 0; i < N; i++){
        if(G[i].size() > 2){
            ok = false;
            break;
        }
        if(seen[i]) continue;
        dfs(G, i);
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}
