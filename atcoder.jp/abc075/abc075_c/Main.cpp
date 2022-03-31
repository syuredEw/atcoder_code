#include <bits/stdc++.h>
using namespace std;
vector<bool> seen;

void dfs(vector<vector<int>> &G, int a, int b, int v){
    seen[v] = true;

    for(int nv : G[v]){
        if((nv == a && v == b) || (nv == b && v == a) || seen[nv]) continue;

        dfs(G, a, b, nv);
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    vector<int> A(M), B(M);
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        A[i] = a;
        B[i] = b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int ans = 0;
    for(int i = 0; i < M; i++){
        seen.assign(N, false);

        dfs(G, A[i], B[i], 0);
        bool flag = true;
        for(int j = 0; j < N; j++){
            if(!seen[j]) flag = false;
        }

        if(!flag){
            ans++;
            //cout << A[i] << "," << B[i] << "," << i << endl;
        }
    }
    cout << ans << endl;
}   