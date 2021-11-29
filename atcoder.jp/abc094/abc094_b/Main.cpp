#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> A(N, 0);
    for(int i = 0; i < M; i++){
        int a;
        cin >> a;
        A[a]++;
    }
    int ans = 1234567;
    int cnt = 0;
    for(int i = X; i < N; i++){
        if(A[i]) cnt++;
    }
    ans = min(cnt, ans);
    cnt = 0;
    for(int i = 0; i < X; i++){
        if(A[i]) cnt++;
    }
    ans = min(ans, cnt);
    cout << ans << endl;
}