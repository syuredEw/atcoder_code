#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, ans = {};
    cin >> S;
    for(int i = (int)S.size() -1; i>= 0; i--){
        if(S[i] == '6') ans+= '9';
        else if(S[i] == '9') ans += '6';
        else ans += S[i];
    }
    cout << ans << endl;
}