#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int si = S.size();
    vector<string> ans(si);

    for(int i = 0; i < si; i++){
        string S_new = S;
        char tmp = S[0];
        for(int j = 1; j < si; j++){
            S_new[j-1] = S[j];
        }
        S_new[si-1] = tmp;
        ans[i] = S_new;
        S = S_new;
    }
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;
    cout << ans[si-1] << endl;
}
