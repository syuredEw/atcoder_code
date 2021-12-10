#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    vector<int> cnt(27, 0);

    for(int i = 0; i < S.size(); i++){
        cnt[S[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(cnt[i] == 0){
            char a = 'a';
            cout << (char)('a'+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}
