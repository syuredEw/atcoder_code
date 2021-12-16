#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, L, R, ans = 0, cntR = 0, cntL = 0;
    cin >> N >> L >> R;
    int k = 0;
    for(int i = 63; i >= 0; i--){
        if((1LL << i) & N){
            cntR = min(R, (1LL << (i+1))-1);
            cntL = (1LL <<i)-1;
            ans += max(0LL, cntR - cntL);
            cntR = min(L-1, (1LL << (i+1))-1);
            cntL = (1LL << i) - 1;
            ans -= max(0LL, cntR - cntL);
        }
    }

    cout << ans << endl;

}