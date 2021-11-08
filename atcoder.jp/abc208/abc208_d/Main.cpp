#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    long long ans = 0;
    vector<vector<long long>> G(N, vector<long long>(N, +1234567890));
    for(int i = 0; i < M; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G[a][b] = c;
    }
    for(int i = 0; i < N; i++) G[i][i] = 0;

    for(int k = 0; k < N; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                G[i][j] = min(G[i][k] + G[k][j], G[i][j]);
                if(G[i][j] < 1234567890) ans += G[i][j];
            }
        }
    }
    cout << ans << endl;
    

}
