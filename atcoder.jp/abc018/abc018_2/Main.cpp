#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    int N;
    cin >> S >> N;
    for(int i = 0; i < N; i++){
        int l, r;
        cin >> l >> r;
        string part_S = "";
        for(int j = l-1; j < r; j++){
            part_S += S[j];
        }
        reverse(part_S.begin(), part_S.end());
        int cnt = 0;
        for(int j = l-1; j < r; j++){
            S[j] = part_S[cnt];
            cnt++;
        }
    }
    cout << S << endl;
}
