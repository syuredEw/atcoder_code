#include <bits/stdc++.h>
using namespace std;

int main()
{
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
    int ans = 0;
    vector<int> seen(N, -1);
    queue<int> que;
    
    for(int i = 0; i < N; i++){
        if(seen[i] != -1) continue;
        que.push(i);
        int cnt = 0;
        while(!que.empty()){
            cnt++;
            int q = que.front();
            que.pop();
            seen[q] = i;
            for(int nq : G[q]){
                if (seen[nq] != -1)
                    continue;
                
                seen[nq] = i;
                que.push(nq);
            }
        }
        if(cnt > ans) ans = cnt;
        //cout << cnt << endl;
    }
    cout << ans << endl;
}
