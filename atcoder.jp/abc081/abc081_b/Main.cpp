#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        long long a, cnt = 0;
        cin >> a;
        while(a % 2 == 0){
            cnt++;
            a /= 2;
        }
        A[i] = cnt;
    }
    long long ans = 1234567890;
    for(int i = 0; i < N; i++){
        ans = min(ans, A[i]);
    }
    cout << ans << endl;

}
