#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, A, B;
    cin >> N >> M >> A >> B;
    int ans = -1;
    if(N <= A){
            N += B;
        }
    for(int i = 0; i < M; i++){
        int c;
        cin >> c;
        N -= c;
        if(N < 0){
            ans = i+1;
            break;
        }
        if(N <= A){
            N += B;
        }
    }
    if(ans == -1) cout << "complete" << endl;
    else cout << ans << endl;
}
