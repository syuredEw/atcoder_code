#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long H, W;
    int C, Q;
    cin >> H >> W >> C >> Q;
    vector<long long> T(Q), N(Q), Co(Q), color(C, 0);
    for(int q = 0; q < Q; q++){
        int t, n, c;
        cin >> t >> n >> c;
        n--; c--;
        T[q] = t;
        N[q] = n;
        Co[q] = c;
    } 
    //cout << H << endl;
    set<int> stH, stW;
    for(int q = Q-1; q >= 0; q--){
        if(T[q] == 1){
            long long sz = stW.size();
            if(stH.count(N[q]) > 0){
                continue;
            }
            color[Co[q]] += (W - sz);
            stH.insert(N[q]);
        }else{
            long long sz = stH.size();
            if(stW.count(N[q]) > 0){
                continue;
            }
            color[Co[q]] += (H - sz);
            stW.insert(N[q]);
        }
    }
    for(int i = 0; i < C; i++){
        cout << color[i] << " ";
    }
    cout << "\n";
}
