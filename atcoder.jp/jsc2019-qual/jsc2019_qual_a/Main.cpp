#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, D;
    cin >> M >> D;
    int ans = 0;
    for(int m = 4; m <= M; m++){
        if(D < 22) break;
        for(int d = 22; d <= D; d++){
            int d1 = d % 10, d10 = d / 10;
            if(d1 == 1 || d10 == 0) continue;
            if(d1 * d10 == m){
                ans++;
            }
        }
    }
    cout << ans << endl;
}
