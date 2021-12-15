#include <bits/stdc++.h>
using namespace std;

int main(){
    long long A, B, C;
    cin >> A >> B >> C;
    int cnt = 0;
    long long firstA = A, firstB = B, firstC = C;
    while (cnt <= 123456789)
    {
        if(A % 2 != 0 || B % 2 != 0 || C % 2 != 0) break;
        long long halfA = A / 2, halfB = B / 2, halfC = C / 2;
        A = (halfB + halfC);
        B = (halfC + halfA);
        C = (halfA + halfB);
        cnt++;
        if(firstA == A){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << cnt << endl;
    
}
