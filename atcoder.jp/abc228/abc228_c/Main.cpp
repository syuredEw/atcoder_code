#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    vector<long long> P(N), P_sort(N);
    for(int i = 0; i < N; i++){
        int a, b, c;
        cin >> a >> b >> c;
        P[i] = a + b + c;
        P_sort[i] = a + b + c;
    }
    sort(P_sort.rbegin(), P_sort.rend());
    int kizyun = P_sort[K-1];
    //cout << kizyun << endl;
    for(int i = 0; i < N; i++){
        if(P[i] + 300 >= kizyun) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}