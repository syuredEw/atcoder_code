#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3, T, ans = "";
    cin >> s1 >> s2 >> s3 >> T;

    for(int i = 0; i < (int)T.size(); i++){
        if(T[i] == '1') cout << s1;
        else if(T[i] == '2') cout << s2;
        else cout << s3;
    }
    cout << endl;

}