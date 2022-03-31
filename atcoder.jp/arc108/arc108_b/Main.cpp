#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    string ans = "";

    for(int i = 0; i < N; i++){
        ans += S[i];
        if(ans.size() > 2){
            int ansis = ans.size();
            if(ans[ansis -1] == 'x' && ans[ansis -2] == 'o' && ans[ansis - 3] == 'f'){
                ans.erase(ansis-3);
            }
        }
    }

    cout << ans.size() << endl;
    
}