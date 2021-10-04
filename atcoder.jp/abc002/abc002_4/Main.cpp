#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int G[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){ 
            G[i][j] = 0;
        }
    }
    for(int i = 0; i < M ; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        G[x][y] = 1;
        G[y][x] = 1;
    }
    int ans = 0;
    for(int i = 0; i < (1 << N); i++){
        int flag = 1, cnt = 0;
        for(int j = 0; j < N; j ++){ //jがbitに含まれるか
            if(i & (1<< j)){ //ビットの中で何個選ぶか見る 
                cnt++;
                for(int k = 0; k < j; k++){ //kがbitに含まれるか
                    if(i & (1 << k)){
                        if(!G[j][k]) flag = 0;
                    }
                }
            }
        }
        if(flag) ans = max(ans, cnt);
    }
    cout << ans << endl;

}