#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> X(N+1);
    for(int i = 0; i < N; i++) cin >> X[i];
    long long ans = 1LL << 30, cnt = 0;
    for(int i = 0; i < 101; i++){
        cnt = 0;
        for(int j = 0; j < N; j++){
            cnt += (i - X[j]) * (i - X[j]);
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}