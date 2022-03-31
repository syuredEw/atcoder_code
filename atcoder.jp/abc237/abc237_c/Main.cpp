#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int N = S.size();
    bool ok = true;
    for(int i = 0; i < S.size(); i++){
        if(S[i] != S[N-i-1]) ok = false;
    }

    if(ok){
        cout << "Yes" << endl;
        return 0;
    }

    long long ans = 0;
    bool flag = true;
    int l = 0, r = S.size()-1;

    for(int i = 0; i < S.size(); i++){
        if(S[i] != S[N-1-i]){
            l = i;
            break;
        }
    }
    for(int i = S.size()-1; i >= 0; i--){
        if(S[i] != 'a'){
            r = i;
            break;
        }
    }
    //cout << r << ", " <<l << endl;
    while(r - l > 1){
        if(S[l] == S[r]){
            l++;
            r--;
        }else{
            cout << "No" << endl;
            return 0;
        }
        //cout << S[l] << S[r] << endl;   
    }
    cout << "Yes" << endl;
}