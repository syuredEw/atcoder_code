#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> A(N+1, 0);
    for(int i = 1; i <= N; i++) cin >> A[i];
    vector<bool> khown(N+5, false);
    while(1){
        if(khown[X]) break;
        khown[X] = true;
        int nextX = A[X];
        X = nextX;
    }

    int ans = 0;
    for(int i = 1; i <= N; i++){
       if(khown[i]) ans++;
    }
    cout << ans << endl;
}