#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long k; 
    long long x, y;
    vector<pair<long long, long long >> a;

    cin >> N >> k;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < N; i++){
        if(a[i].first > k) break;
        k += a[i].second;
    }
    cout << k << endl;
}