#include <bits/stdc++.h>
using namespace std;

int main(){
    string S1, S2;
    cin >> S1;
    cin >> S2;
    int cnt = 0;
    if(S1[0] == '#' || S2[1] == '#'){
        if(S2[0] == '#' || S1[1] == '#'){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }
}
