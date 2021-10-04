#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> S(4);
    for(int i = 0; i < 4; i++) cin >> S[i];
    sort(S.begin(), S.end());
   int cnt = 0; 
    for(int i = 0; i < 4; i++){
        if(i == 0){
            if(S[i] == "2B") cnt++;
        }
        if(i == 1){
            if(S[i] == "3B") cnt++;
        }
        if(i == 2){
            if(S[i] == "H") cnt++;
        }
        if(i == 3){
            if(S[i] == "HR") cnt++;
        }
    } 
    if(cnt == 4) cout << "Yes" << endl;
    else cout << "No" <<endl;
    return 0;
}