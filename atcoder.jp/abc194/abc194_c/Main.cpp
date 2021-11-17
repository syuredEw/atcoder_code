#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(405, 0);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        a += 200;
        A[a]++;
    }
    long long ans = 0;
    for(int i = 0; i < A.size(); i++){
        for(int j = i; j < A.size(); j++){
            ans += A[i] * A[j] * (i - j) * (i - j);
        }
    }
    cout << ans << endl;
}
