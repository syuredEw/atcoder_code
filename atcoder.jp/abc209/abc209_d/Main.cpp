#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<vector<int> > G(N+1);
    for(int i = 0; i < N-1; i++){
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<int> dist(N+1, -1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for(auto nv : G[v]){
            if(dist[nv] == -1){
                dist[nv] = dist[v] + 1;
                que.push(nv);
            }
        }
    }

    for(int q = 0; q < Q; q++){
        int s, t;
        cin >> s >> t;
        if(dist[s-1] % 2 == dist[t-1] % 2) cout << "Town" << endl;
        else cout << "Road" << endl; 
    }

}
