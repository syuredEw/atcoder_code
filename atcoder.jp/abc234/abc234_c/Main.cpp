#include <bits/stdc++.h>
using namespace std;

int main()
{
    //入力
    long long K;
    cin >> K;
    string ans = "";

    while (K > 0)
    {
        int a = K % 2;
        K /= 2;
        ans = (char)('0' + 2 * a) + ans;
    }
     
    cout << ans << endl;
}
