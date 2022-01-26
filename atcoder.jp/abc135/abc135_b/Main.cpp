#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), b;
    for(int i = 0; i < N; i++) cin >> A[i];
    b = A;
    sort(A.begin(), A.end());
    int cnt  = 0;
    for(int i = 0; i < N; i++){
        if(A[i] != b[i]) cnt++;
    }
    if(cnt < 3) cout << "YES" << endl;
    else cout << "NO" << endl;

}
