#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<long long > A(N), ans(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector<long long> low(N);
    for(int i = 0; i < N; i++){
        low[i] = A[i] - (i+1);
    }
    for(int i = 0; i < Q; i++){
        long long K;
        cin >> K;
        const int idx = lower_bound(low.begin(), low.end(), K) - low.begin();
        if(idx == N){
            cout << A[N-1] + (K - low[N-1]) << endl;
        }else{
            cout << A[idx] - (low[idx] - K + 1) << endl;
        }
    }
}