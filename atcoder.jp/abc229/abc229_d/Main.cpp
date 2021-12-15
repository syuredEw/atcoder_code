#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int K;
    cin >> K;
    int N = S.size();
    vector<int> sum(N+5);
    sum[0] = 0;
    //累積和を数える
    for(int i = 0; i < N; i++){
        if(S[i] == '.') sum[i+1] = sum[i] + 1;
        else{
            sum[i+1] = sum[i];
        }
    }
    int ans = 0, r = 0;
    //尺取り法
    for(int l = 0; l < N; l++){
        while (r < N && sum[r+1] - sum[l] <= K)
        {
            r++;
        }
        ans = max(ans, r - l);
    }
    cout << ans << endl;
}
