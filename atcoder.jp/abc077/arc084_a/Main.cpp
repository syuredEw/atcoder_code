#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N), B(N), C(N);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    for(int i = 0; i < N; i++) cin >> C[i];
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    long long ans = 0;
    for(int i = 0; i < N; i++){
        auto  Iter_a = lower_bound(A.begin(), A.end(), B[i]);
        auto  Iter_c = upper_bound(C.begin(), C.end(), B[i]);
        long long a = (int)(Iter_a - A.begin());
        long long c = C.size() - (int)(Iter_c - C.begin());
        ans += a * c;
        //cout << ans << endl;
    }
    cout << ans <<endl;


}