#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int cnt = 0, si = S.size()-1;

    for(int i = 0; i < S.size() / 2; i++){
        if(S[i] != S[si - i]) cnt++;
    }
    cout << cnt << endl;
}
