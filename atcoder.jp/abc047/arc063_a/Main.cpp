#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int N = S.size();
    char bef = S[0];
    int ans = 0;
    for(int i = 0; i < N; i++){
        if(S[i] != bef){
            ans++;
            bef = S[i];
        }
    }
    cout << ans << endl;
}
