#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    long long MOD = 1000000007;
    vector<vector<int> > G(N);
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<long long> dist(N, -1), cnt(N, 0);
    queue<int> que;
    dist[0] = 0;
    cnt[0] = 1;
    que.push(0);
    while (!que.empty())
    {
        int v = que.front(); que.pop();
        for(auto nv : G[v]){
            if(dist[nv] == -1){
                dist[nv] = dist[v]+1;
                que.push(nv);
                cnt[nv] = cnt[v];
            }
            else if(dist[nv] == dist[v]+1){
                cnt[nv] += cnt[v];
                cnt[nv] %= MOD; 
            }
        }
    }
    cout << cnt[N-1] << endl;
}    