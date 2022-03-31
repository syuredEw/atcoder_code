#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());
    int maxv = A[0];
    int ans;
    for(int i = 0; i < N; i++){
        if(A[i] != A[0]){
            ans = A[i];
            break;
        }
    }
    cout << ans << endl;
}
