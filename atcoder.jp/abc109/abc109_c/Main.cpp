#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long ans, X;
    cin >> X;
    vector<long long> x(N); 
    for(int i = 0; i < N; i++){
        cin >> x[i];
    }

    sort(x.begin(), x.end());
    ans = abs(X - x[0]);

    for(int i = 1; i < N; i++){
        ans = gcd(ans, x[i] - x[i-1]);
    }
    cout << ans << endl;
}