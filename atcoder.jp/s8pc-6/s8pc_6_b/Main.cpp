#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for(int i = 0; i < N; i++){
        long long a, b;
        cin >> a >> b;
        A[i] = a;
        B[i] = b;
    }
    long long ans = 9223372036854775807;
    long long enter, exit;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            enter = A[i];
            exit = B[j];
            long long cnt = 0;
            for(int k = 0; k < N; k++){
                cnt += abs(enter - A[k]) + B[k] - A[k] + abs(B[k] - exit);
            }
            //cout << cnt << endl;
            if(ans > cnt) ans = cnt;
        }
    }
    cout << ans << endl;
}