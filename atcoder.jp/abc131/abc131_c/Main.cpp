#include <bits/stdc++.h>
using namespace std;

int main(){
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long bcd = C * D / __gcd(C, D);
    //Cで割り切れる個数
    A--;
    long long cntA = A / C, cntB = B / C;
    //Dで割り切れる数
    cntA += A / D;
    cntB += B / D;
    //CでもDでも割り切れる数
    cntA -= A / bcd;
    cntB -= B / bcd;
    long long ans = (B - cntB) - (A - cntA) ;
    cout << ans << endl;
}