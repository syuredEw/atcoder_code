#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> B(N), cout_a(N, 0);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        cout_a[a-1]++;
    }
    for(int i = 0; i< N; i++){
        cin >> B[i];
    }
    long long ans = 0;
    for(int i = 0; i < N; i++){
        int c; cin >> c;
        c--;
        ans += cout_a[B[c]-1];
    }
    cout << ans <<endl;
}