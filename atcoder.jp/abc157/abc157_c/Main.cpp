#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
 
int main(){
    int N,M;
    cin >> N >> M;
    vector<int>ans(N,0);
    ans.at(0) = -1;
    if(N == 1 && M == 0){
        cout << 0;
        return 0;
    }
    for(int i = 0; i < M; i++){
        int s,c;
        cin >> s >> c;
        if(ans.at(s - 1) != 0 && ans.at(s - 1) != -1){
            if(ans.at(s - 1) != c){
                cout << -1;
                return 0;
            }
        }
        else{
            ans.at(s - 1) = c;
        }
    }
    for(int i = 0; i < N; i++){
        if(i == 0 && ans.at(i) == 0 && N != 1){
            cout << -1;
            return 0;
        }
        else{
            if(ans.at(i) == -1){
                if(i == 0) cout << 1;
                else cout << 0;
            }
            else cout << ans.at(i);
        }
    }
    return 0;
}