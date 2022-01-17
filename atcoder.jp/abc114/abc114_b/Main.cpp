#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    const int se = 753;
    int ans = 10000;
    for(int i = 0; i < S.size() - 2; i++){
        string sub  = "";
        for(int j = i; j < i+3; j++){
            sub += S[j];
        }
        int c = atoi(sub.c_str());
        ans = min(ans, abs(c - se));
        //cout << sub << endl;
    }
    cout << ans << endl;
}
