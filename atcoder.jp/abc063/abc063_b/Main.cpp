#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> cnt(30, 0);
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++){
        cnt[S[i] - 'a']++;
    }
    
    for(int i = 0; i < 30; i++){
        if(cnt[i] > 1){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
}

