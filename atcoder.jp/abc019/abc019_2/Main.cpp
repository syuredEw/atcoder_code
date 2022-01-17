#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, ans = "";
    cin >> S;
    int cnt = 1;

    for(int i = 0; i < S.size(); i++){
        if(i > 0){
            if(S[i-1] == S[i]){
                cnt++;
            }else{
                ans += S[i-1];
                string s = to_string(cnt);
                ans += s;
                cnt = 1;
            }
        }
    }
    ans += S[S.size()-1];
                string s = to_string(cnt);
                ans += s;
                cnt = 1;
    cout << ans << endl;
}
