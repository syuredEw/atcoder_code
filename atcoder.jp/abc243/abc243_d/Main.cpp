#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long X;
    cin >> X;
    string S;
    cin >> S;
    string ans = "";

    while(X > 0){
        if(X % 2 == 0){
            ans = '0' + ans;
        }else ans = '1' + ans;
        X /= 2;
    }
    //cout << ans << endl;
    for(int i = 0; i < N; i++){
        if(S[i] == 'U'){
            ans.erase(ans.end()-1);
        }else if(S[i] == 'L'){
            ans += '0';
        }else{
            ans += '1';
        }
        //cout << ans << endl;
    }
    //cout << ans << endl;
    long long int flag = 0;
    int n = ans.size();
    for(int i = 0; i < n; i++){
        if(ans[i] == '1'){
            flag += 1LL << (n -1 - i);
        }
    }
    cout << flag << endl;
}