#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int N = S.size();
    long long ans = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == 'U'){
            ans += N - i - 1;
            ans += 2 * (i);
        }else{
            ans += (i);
            ans += 2 * (N - i - 1);
        }
    }
    cout << ans << endl;
}
