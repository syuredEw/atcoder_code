#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long W;
    cin >> N >> W;
    vector<pair<long long, int>> AB(N);
    for(int i = 0; i < N; i++){
        cin >> AB[i].first >> AB[i].second;
    }
    sort(AB.rbegin(), AB.rend());
    long long ans = 0;
    for(int i = 0; i < N; i++){
        if(W - AB[i].second < 0){
            ans += (W * AB[i].first);
            break;
        }else{
            ans += (AB[i].first * AB[i].second);
            W -= AB[i].second;
        }
    }
    cout << ans << endl;
    
}
