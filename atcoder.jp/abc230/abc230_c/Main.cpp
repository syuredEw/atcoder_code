#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, A, B, P, Q, R, S;
    cin >> N >> A >> B;
    cin >> P >> Q >> R >> S;
    long long qp = Q - P + 1, sr = S - R + 1;
    vector<vector<bool>> table(qp + 10, vector<bool>(sr, false));
    long long min1 = max(1 - A, 1 - B), min2 = max(1 - A, B - N), max1 = min(N - A, N - B), max2 = min(N - A, B - 1);

    for(long long  i = 0; i < qp; i++){
        for(long long j = 0; j < sr; j++){
            long long a = P + i - A, b = R + j - B;
            if(a == b && min1 <= a && a <= max1){
                table[i][j] = true;
            }
            b = - R - j + B;
            if(a == b && min2 <= b && b <= max2){
                table[i][j] = true;
            }
            if(table[i][j]) cout << "#";
            else cout << ".";
        }
        cout << endl;
    }

}
