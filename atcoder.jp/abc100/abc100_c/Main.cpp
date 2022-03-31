#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        long long a;
        cin >> a;
        while(a % 2 != 1){
            a /= 2;
            ans++;
        }
    }
    cout << ans << endl;

}
