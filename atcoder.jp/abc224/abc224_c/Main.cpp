#include <bits/stdc++.h>
using namespace std;
long double dis(long double x1, long double y1, long double x2, long double y2){
    long double dx = x1 - x2, dy = y1 - y2;
    return sqrt(dx * dx - dy * dy);
}
int main(){
    int N;
    cin >> N;
    vector<long long> X(N), Y(N);
    for(int i = 0; i < N; i++){
        cin >> X[i] >> Y[i];
    }
    long long ans = 0, cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N ; j++){
            if(i < j){
                for(int k = 0; k < N; k++){
                    if(j < k){
                        long long ab_x = X[j] - X[i], ab_y = Y[j] - Y[i], ac_x = X[k] - X[i], ac_y = Y[k] - Y[i];
                        if(ab_x * ac_y - ac_x * ab_y == 0) cnt++;
                    }
                }
            }
        }
    }
    long long all = N * (N-1) * (N-2) / (3 * 2);
    cout << all - cnt << endl;
}