#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, m;
    cin >> a >> b >> m;
    vector<int> A(a), B(b);
    int ans = 1234567, minB = 1234567, minA = 1234567;
    for(int i = 0; i < a; i++){
        cin >> A[i];
        minA = min(minA, A[i]);
    }
    for(int j = 0; j < b; j++){
        cin >> B[j];
        minB = min(minB, B[j]);
    }
    ans = minA + minB;
    //cout << ans << endl;
    for(int i = 0; i < m; i++){
        int x, y, c;
        cin >> x >> y >> c;
        x--; y--;
        int total = A[x] + B[y] - c;
        ans = min(ans, total);
    }
    cout << ans << endl;
}