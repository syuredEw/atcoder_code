#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;
    int minap = 1234, ans = 0, cnt;
    for(int i = 0; i < N; i++){
        if(abs(L + i) < abs(minap)){
            minap = L + i;
            cnt = i;
        }
        ans += (L + i);
    }

    cout << ans - minap << endl;
}
