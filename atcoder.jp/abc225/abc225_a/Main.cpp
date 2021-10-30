#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    if(S[0] == S[1] && S[1] == S[2]) cout << 1 << endl;
    else if(S[1] == S[2] || S[0] == S[1] || S[0] == S[2]) cout << 3 << endl;
    else cout << 6 << endl;
}