#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    long long ans = 1234567890;
    for(int bit = 0; bit < (1 << N - 1); bit++){
        long long xore = 0, ore = 0;
        for(int i = 0; i <= N; i++){
            if(i < N) ore |= A[i];
            if(i == N || (bit >> i & 1)) {
                xore ^= ore;
                ore = 0;
            }
        }
        ans = min(ans, xore);
    }
    cout << ans << endl;
    return 0;
}
