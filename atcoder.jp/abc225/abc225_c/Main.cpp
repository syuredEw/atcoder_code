#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, M;
    cin >> N >> M;
    vector<vector<long long>> B(N+1, vector<long long>(M+1));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            long long b;
            cin >> b;
            B[i][j] = b;
        }
    }
    bool ok = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M-1; j++){
          {
            if(B[i][j]+1 != B[i][j+1]){
                ok = false;
            }
            else if(B[i][j] % 7 == 0 && B[i][j+1] % 7 == 1) ok = false;
          }
        }
        if(i > 0){
            for (int j = 0; j < M; j++)
            {
                if(B[i-1][j]+7 != B[i][j]) ok = false;
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}
