#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, ans = 0;
    cin >> N >> K;
    int boad[N][N];
    vector<int> n(N);
    for(int i = 0; i < N; i++){
        n[i] = i;
        for(int j = 0; j < N; j++){
            cin >> boad[i][j];
        }
    } 

    do{
        int dis = 0;
        if(n[0] == 0){
            for(int i = 0; i < N; i++){
                if(N-1 == i) dis += boad[n[i]][0];
                else dis += boad[n[i]][n[i+1]];
            }
        }
        //cout << dis << endl;
        if(dis == K) ans++;
    } while(next_permutation(n.begin(), n.end()));
    
    cout << ans << endl;

}