#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    int K;
    cin >> N >> M >> K;
    for(int n = 0; n <= N; n++){
        for(int m = 0; m <= M; m++){
            if(n * (M - m) + (N - n) * m == K){
                cout << "Yes" << endl;
                return 0;
            } 
        }
    }
    cout << "No" << endl;
    
}