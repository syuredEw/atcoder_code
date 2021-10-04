#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  N, K;
    cin >> N >> K;
    long long ans = N % K;
    ans = min(ans, abs(ans - K));
    cout << ans << endl;
}