#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long K, ans;
    cin >> N >> K;
    vector<long long> res(N, 0);
    vector<pair<int, int> > a(N);
    for(int i = 0; i< N; i++){
        int A; cin >> A;
        a[i] = make_pair(A, i);
    }
    sort(a.begin(), a.end());
    ans = K / N;
    K %= N;
    for(int i = 0; i < K; i++){
        res[a[i].second]++;
    }
    for(int i = 0; i < N; i++){
        cout << res[i] + ans << endl;
    }
}
