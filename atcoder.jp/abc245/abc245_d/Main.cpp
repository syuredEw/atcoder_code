#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<long long> A(N + 2);
    vector<long long> C(N + M +2);
    for(int i = 0; i <= N; i++){
        cin >> A[i];
    }
    for(int i = 0; i <= N + M; i++){
        cin >> C[i];
    }
    vector<long long> B(M+2);
    for(int i = M; i >= 0; i--){
        B[i] = C[N + i] / A[N];
        for(int j = N; j >= 0; j--){
            C[i + j] -= B[i] * A[j];
        }
    }

    for(int i = 0; i <= M; i++){
        cout << B[i] << " ";
    }
    printf("\n");
}