#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long double> A(N), B(N);
    long double sum = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
        sum += (A[i] / B[i]);
    }
    sum /= 2;
    long double ans = 0;
    for(int i = 0; i < N; i++){
        if(sum < A[i] / B[i]){
            ans += sum / (1 / B[i]);
            break;
        }
        sum -= A[i] / B[i];
        ans += A[i];
        //cout << sum << "," << ans << endl;
    }
    cout << fixed << setprecision(14)<< ans << endl;
}
