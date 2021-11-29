#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T = "ACGT";
    cin >> S;
    int ans = 0, cnt = 0;
    for(int i = 0; i < S.size(); i++){
        int flag = 0;
        for(int j = 0; j < T.size(); j++){
            if(S[i] == T[j]){
                cnt++;
                break;
            }else{
                flag++;
            }
        }
        if(flag == 4){
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
}