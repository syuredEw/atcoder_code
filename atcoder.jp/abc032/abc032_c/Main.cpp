#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long long K;
    cin >> N >> K;
    int s[N+1];
    for(int i = 0; i < N; i++){
        cin >> s[i];
        if(s[i] == 0){
            cout << N << endl;
            return 0;
        }
    }
    long long sum = 1;
    int right = 0, ans = 0;
    for(int left = 0; left < N; left++){
        while (right < N && sum * s[right] <= K)
        {
            sum *= s[right];
            right++;
        }
        ans = max(ans, right -left);
        if(left == right) right++;
        else sum /= s[left];
    }
    cout << ans << endl;

}