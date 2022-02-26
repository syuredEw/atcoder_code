#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<long long> A(N), B(M);
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++) cin >> B[i];
    int ans = 0;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(A[j] == B[i]){
                ans++;
                A[j] = 0;
                break;
            }
        }
    }
    if(ans == M) cout << "Yes" <<endl;
    else cout<< "No" << endl;
}