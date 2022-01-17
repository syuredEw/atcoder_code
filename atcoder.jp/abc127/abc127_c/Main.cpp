#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M ;
    cin >> N >> M;
    vector<int> L(N, 0);
    for(int i = 0; i < M; i++){
        int l, r;
        cin >> l >> r;
        l--; r;
        L[l]++;
        L[r]--;
    }
    int cnt = 0, ans = 0;
    for(int i = 0; i < N; i++){
        cnt += L[i];
        if(cnt == M) ans++;
    }
    cout << ans << endl;

}
