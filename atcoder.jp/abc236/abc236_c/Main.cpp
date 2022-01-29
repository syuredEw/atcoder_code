#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> S(N), T(N);
    for(int i = 0; i < N; i++) cin >> S[i];
    for(int i = 0; i < M; i++) cin >> T[i];
    int m = 0;

    for(int i = 0; i < N; i++){
        if(S[i] == T[m]){
            m++;
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }
    }
}
