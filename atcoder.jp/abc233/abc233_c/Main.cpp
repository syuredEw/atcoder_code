#include <bits/stdc++.h>
using namespace std;
long long ans = 0, N, X;
vector<int> L;
void dfs(const vector<vector<long long>> &G, long long v, long long x){
    if(v == N){
        if(x == X) ans++;
        return;
    }

    for(int l = 0; l < L[v]; l++){
        long long nx = x * G[v][l];
        if(nx > X) continue;
        dfs(G, v+1, nx);
    }
}

int main(){
    cin >> N >> X;
    L.resize(N);
    vector<vector<long long>> G(N);

    for(int i = 0; i < N; i++){
        cin >> L[i];
        for(int l = 0; l < L[i]; l++){
            int a;
            cin >> a;
            G[i].push_back(a);
        }
    }
    dfs(G, 0, 1);
    cout << ans << endl;
}