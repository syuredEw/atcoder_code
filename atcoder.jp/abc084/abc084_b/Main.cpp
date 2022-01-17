#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++){
        if(i == A && S[i] != '-'){
            cout << "No" << endl;
            return 0;
        }else if(i == A){
            continue;
        }
        if(S[i] == '-'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
