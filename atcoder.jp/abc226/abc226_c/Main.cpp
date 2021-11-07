#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
vector<bool> seen;
void dfs(const vector<vector<int>> &G, int v){
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        dfs(G, next_v);
    }
}
int main(){
    int N;
    cin >> N;
    vector<long long> T(N);
    long long ans = 0;
    seen.assign(N, false);
    vector<vector<int>> G(N);
    for(int i = 0; i< N; i++){
        cin >> T[i];
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int a;
            cin >> a;
            a--;
            G[i].push_back(a);
        }
    }
    dfs(G, N-1);
    for(int i = 0; i< N; i++){
        if(seen[i]) ans+= T[i];
    }
    cout << ans << endl;


}
