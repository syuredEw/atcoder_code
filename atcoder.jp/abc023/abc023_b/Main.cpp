#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 0;
    if(N == 1){
        if(S == "b"){
            ans = 0;
        }else{
            ans = -1;
        }
    }
    else{
        string I = "b";
        N -= 2;
        int flag = 1;
        int cnt = 0;
        while(N > 0){
            if(flag == 1){
                I = 'a' + I + 'c';
                flag = 2;
            }else if(flag == 2){
                I = 'c' + I + 'a';
                flag = 3;
            }else{
                I = 'b' + I + 'b';
                flag = 1;
            }
            N -= 2;
            cnt++;
        }

        if(S == I) ans = cnt;
        else ans = -1; 
    }
    cout << ans << endl;

}
