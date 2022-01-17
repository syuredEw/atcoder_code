#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long T;
    cin >> N >> T;
    long long ans = 0, lastTime = 0;
    cin >> ans;
    ans += T;
    lastTime = ans;
    for(int i = 1; i < N; i++){
        long long t;
        cin >> t;
        if(lastTime > t){
            ans += T -(lastTime - t);
            lastTime = t + T;
        }else{
            ans += T;
            lastTime = t + T;
        }
    }

    cout << ans << endl;
}
