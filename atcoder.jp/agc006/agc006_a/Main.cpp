#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(s[i] == t[0]){
            for(int j = i; j < N; j++){
                if(s[j] != t[j - i]){
                    break;
                }else if(s[j] == t[j - i] && j == N -1){
                    cout << 2 * N - (N - i) << endl;
                    return 0;
                }
            }
        }
    }
    //cout << cnt << endl;
    cout << 2 * N << endl;
}
