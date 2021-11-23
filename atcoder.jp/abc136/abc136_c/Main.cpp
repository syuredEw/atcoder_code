#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> H(N);
    for(int i = 0; i < N; i++) cin >> H[i];
    bool ok = true;
    for(int i = 1; i < N; i++){
        if(H[i-1] < H[i]) H[i]--;
    }
    for(int i = 1; i < N; i++){
        if(H[i-1] > H[i]) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}
