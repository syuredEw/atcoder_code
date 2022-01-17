#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    int an = T[0] - S[0];
    if(an < 0) an += 26; 
    bool ok = true;
    for(int i = 1; i < S.size(); i++){
        int sub = T[i] - S[i];
        if(sub < 0){
            sub += 26; 
        }
        if(an != sub) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout <<"No" << endl; 
}
