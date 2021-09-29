#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    long long cnt = 0;
    vector<int> H(N);
    if(N <= K){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }
    sort(H.begin(), H.end());

    for(int i = 0; i < N - K; i++){
        cnt += H[i];
    }
    cout << cnt << endl;

}