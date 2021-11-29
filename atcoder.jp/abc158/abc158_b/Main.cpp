#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long N, A, B;
    cin >> N >> A >> B;
    unsigned long long sum = A + B, ans = 0;
    long long las = N / sum;
    ans += (las) * A;
    if(A < N % sum) ans += A;
    else{
        ans += (N % sum);
    }
    cout << ans << endl;
}