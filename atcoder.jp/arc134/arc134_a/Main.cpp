#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    unsigned long long L, W, ans = 0;
    cin >> N >> L >> W;
    vector<unsigned long long> a(N, 0);
    for(int i = 0; i < N; i++) cin >> a[i];
    a.push_back(L);  
    if(a[0] > 0){
        if(a[0] % W != 0){
            ans++;
        }
        ans += (a[0] / W);
    }
    for(int i = 0; i < N-1; i++){
        if(a[i] + W < a[i+1]){
            //cout << a[i] + W << endl;
            if ((a[i+1] - a[i] - W) % W != 0)
            {
                ans++;
            }
            ans += ((a[i+1] - a[i] - W) / W);
        }
        //cout << ans << endl;
    }
    if(a[N-1] + W < L){
        unsigned long long dis = L - a[N - 1] - W;
        if(dis % W != 0){
            ans++;
        } 
        ans += (dis / W);
    }
    cout << ans << endl;
}
