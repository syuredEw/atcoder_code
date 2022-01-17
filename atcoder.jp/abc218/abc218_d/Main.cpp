#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    vector<pair<int, int>> xy(N);
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        xy[i] = make_pair(x, y);
    }
    sort(xy.begin(), xy.end());

    for(int x = 0; x < N; x++){
        for(int y = x; y < N; y++){
            if(xy[x].first < xy[y].first && xy[x].second < xy[y].second){
                if(binary_search(xy.begin(), xy.end(), make_pair(xy[x].first, xy[y].second)) && binary_search(xy.begin(), xy.end(), make_pair(xy[y].first, xy[x].second))){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
