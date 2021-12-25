#include <bits/stdc++.h>
using namespace std;

int main(){
    int L, R;
    cin >> L >> R;
    string S;
    cin >> S;
    L--; R--;
    for(int i = 0; i <= (R - L)/ 2; i++){
        swap(S[L+i], S[R-i]);
    }
    cout << S << endl;
    return 0;
}