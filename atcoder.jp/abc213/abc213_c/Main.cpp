#include <bits/stdc++.h>
using namespace std;

int main() {
    long long H, W;
    int N;
    cin >> H >> W >> N;
    vector<long long> A(N), B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    vector<long long> Abefore = A, Bbefore = B;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    B.erase(unique(B.begin(), B.end()), B.end());

    for(int i = 0; i < N; i++){
        long long a, b;
        a = lower_bound(A.begin(), A.end(), Abefore[i]) - A.begin();
        b = lower_bound(B.begin(), B.end(), Bbefore[i]) - B.begin();
        cout << a+1 << " " << b+1 << endl;
    }

}