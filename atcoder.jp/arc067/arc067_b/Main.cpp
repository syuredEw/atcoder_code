#include <bits/stdc++.h>
using namespace std;

vector<long long> X;
vector<bool> seen;
long long ans = 0;


int main(){
    long long N, A, B;
    cin >> N >> A >> B;
    X.resize(N);
    seen.resize(N);

    for(int i = 0; i < N; i++){
        cin >> X[i];
    }

    for(int i = 0; i < N-1; i++){
        ans += min(A * (X[i+1] - X[i]), B);
    }
    cout << ans << endl;
}