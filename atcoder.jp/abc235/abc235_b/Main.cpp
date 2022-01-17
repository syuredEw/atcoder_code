#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long ans = -1;
    cin >> N;
    for(int i = 0; i < N; i++){
        long long h;
        cin >> h;
        if(h > ans) ans = h;
        else{
            break;
        }
    }

    cout << ans << endl;
}
