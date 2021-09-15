#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long cnt = 0, ans = 0;
    while (1)
    {
        cnt = pow(2, ans);
        //cout << cnt << endl;
        if(cnt > N) break;
        ans++;
    }
    ans -= 1;
    cout << ans << endl;
    return 0;
    
}