#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T;
    cin >> S >>T;
    //cout << S.length();
    int len = S.length();
    if(S == T){
        cout << "Yes" << endl;
        return 0;        
    }
    for(int i = 0; i < len; i++){
        string s = S;
        char tmp = s[i], tmp1 = s[i+1];
        s.erase(i, 1);
        s.insert(i, 1, tmp1);
        s.erase(i+1, 1);
        s.insert(i+1, 1, tmp);

        if(s == T){
            cout << "Yes" << endl;
            return 0;
        }
        //cout << s << endl;
    }
    cout << "No" << endl;

}