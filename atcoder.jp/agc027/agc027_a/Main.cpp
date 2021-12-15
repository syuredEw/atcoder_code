#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long x;
    cin >> N >> x;
    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int ans;
    sort(A.begin(), A.end());
    if(A[0] > x){
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(x < A[i]){
            ans = i;
            break;
        }
        x -= A[i];
        cnt++;
    }
    if(x == 0 && cnt == N) ans = N;
    else if(x > 0 && cnt == N) ans = N - 1;
    cout << ans << endl;
}