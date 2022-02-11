#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N+1), B(N);
    for(int i = 0; i < N+1; i++) cin >> A[i];
    long long ans = 0;
    for(int i = 0; i < N; i++){
        int b;
        cin >> b;
        if(A[i] >= b){
            ans += b;
        }else{
            ans += A[i];
            b -= A[i];
            if(A[i+1] >= b){
                ans += b;
                A[i+1] -= b;
            }else{
                ans += A[i+1];
                A[i+1] = 0;
            }
        }
    }

    cout << ans << endl;
}
