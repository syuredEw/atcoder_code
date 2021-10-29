#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    string S;
    cin >> N >> S >> Q;
    bool ok = false;
    for(int i = 0; i < Q; i++){
        int t, a, b;
        cin >> t >> a >> b;
        
        if(t == 1){
            a--; b--;
            if(ok){
                if(a < N) a += N;
                else a -= N;
                if(b < N) b += N;
                else b -= N;
                swap(S[a], S[b]);
                //cout << S << endl;
            }
            else{
                swap(S[a], S[b]);
            }
        }
        else{
            if(ok) ok = false;
            else ok = true;
        }
    }
    if(ok){
        string Sfro = S.substr(0, N), Sba = S.substr(N);
        S = Sba + Sfro; 
    }
    cout << S <<endl;
}
