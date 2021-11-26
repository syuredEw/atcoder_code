#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<long long, long long>> ba(N);
    for(int i = 0; i < N; i++){
        cin >> ba[i].second >> ba[i].first;
    } 
    sort(ba.begin(), ba.end());
    
    long long cnt = 0;
    bool ans = true;
    for(int i = 0; i < N; i++){
        cnt += ba[i].second;
        if(cnt > ba[i].first){
            ans = false;
            break;
        }
    }
    //cout << cnt << endl;
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

}
