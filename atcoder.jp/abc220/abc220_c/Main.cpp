#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    long long X, ans;
    cin >> N;
    vector<long long> A(N);
    long long sum = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        sum += A[i];
    }
    cin >> X;
    //cout << X << endl;
    ans = X / sum * N;
    X %= sum;
    //cout << X << endl;
    for(int i = 0; i < N; i++){
        ans++;
        X -= A[i];
        if(X < 0) break;
    }
    cout << ans << endl;
}
