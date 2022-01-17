#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans = 0;
    if(S.size() == 1){
        cout << 0 << endl;
        return 0;
    }
    else{
        for(int i = 1; i < S.size(); i++){
            if(S[i] == S[i-1]){
                ans++;
                if(S[i] == '0') S[i] = '1';
                else S[i] = '0';
            }
        }
    }
    cout << ans << endl;
}
