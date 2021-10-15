#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, C;
    cin >> N >> M >>C;
    vector<int> B(M);
    for(int i = 0; i < M; i++){
        cin >> B[i];
    }
    int ans = 0;
    for(int i = 0; i < N; i++){
        long long sum = 0;
        for(int j = 0; j < M; j++){
            int a; cin >> a;
            sum += a * B[j];
        }
        //cout << sum + C <<endl;
        if(sum + C > 0) ans++;
    }
    cout << ans << endl;
}