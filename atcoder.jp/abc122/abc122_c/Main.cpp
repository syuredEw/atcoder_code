#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<int> a(S.size()+1, 0), s(S.size()+1, 0);
    
    for(int i = 0; i < S.size(); i++){
        if(i+1 < N && S[i] =='A' && S[i+1] == 'C'){
            a[i] = 1;
        }
        s[i+1] = s[i] + a[i];
    }
    for(int q = 0; q < Q; q++){
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << s[r] - s[l] << endl;
    }
    return 0;
}