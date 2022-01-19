#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(100005, 0);
    long long ans = 0;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        ans += a;
        A[a] += 1;
    }

    int Q;
    cin >> Q;
    for(int q = 0; q < Q; q++){
        int b, c;
        cin >> b >> c;
        
        int cnt = A[b];
        A[b] = 0;
        A[c] += cnt;
        ans += (cnt * c - cnt * b);
        cout << ans << "\n";
    }
}
