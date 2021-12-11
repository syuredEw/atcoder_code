#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for(int q = 0; q < Q; q++){
        long long x;
        cin >> x;
        auto iter = lower_bound(A.begin(), A.end(), x);
        int cnt = iter - A.begin();
        cout << N - cnt << endl;
    }
}
