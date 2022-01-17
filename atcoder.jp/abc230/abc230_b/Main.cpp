#include <bits/stdc++.h>
using namespace std;
bool ok = false;
int main(){
    string S;
    cin >> S;
    string T = "oxxoxxoxxoxxoxxoxxoxxoxxoxx";
    int cnt = 0;
    for(int i = 0; i < T.size(); i++){
        if(S[cnt] == T[i]){
            int flag = 0;
            for(int j = 0; j < S.size(); j++){
                if(S[j] == T[i + j]){
                    flag++;
                }
            }
            if(flag == S.size()){
                ok = true;
                break;
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout <<"No" << endl;
}
