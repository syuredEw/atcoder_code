#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<long long > A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    long long gold = 0, silver = 0;
    bool gold_have = true;
    for(int i = 0; i < N; i++){
        if(i == N-1){
            if(gold_have) cout << 0 << " ";
            else cout  << 1 << " ";
            return 0;
        }
        if(gold_have){
            if(A[i+1] < A[i]){
                cout << 1 << " ";
                gold_have = false;
            }
            else cout << 0 << " ";
        }
        else{
            if(A[i+1] > A[i]){
                cout << 1 << " ";
                gold_have = true;
            }
            else{
                cout << 0 << " ";
            }
        }
    }
    
}