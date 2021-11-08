#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<long long> c(N+1);
    map<int, int> mp;
    for(int i = 1; i <= N; i++){
        cin >> c[i];
    }
    for(int i = 1; i <= K; i++) mp[c[i]]++;
    int ans = mp.size();
    for(int i = K+1; i <= N; i++){
        mp[c[i]]++;
        mp[c[i-K]]--;
        if(mp[c[i-K]] == 0) mp.erase(c[i-K]);
        ans = max(ans, (int)mp.size());
        
    } 
    cout << ans << endl;
}
