#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> X(N), sortX(N);
    for(int i = 0; i < N; i++){
        long long x;
        cin >> x;
        X[i] = x;
        sortX[i] = x; 
    }
    sort(sortX.begin(), sortX.end());
    long long cenL = sortX[N/2-1], cenR = sortX[N/2];

    for(int i = 0; i < N; i++){
        if(X[i] >= cenR){
            cout << cenL << endl;
        } else{
            cout << cenR << endl;
        }
    }

}