#include <bits/stdc++.h>

using namespace std;

int main()

{

    int X, Y, A, B, C;

    cin >> A >> B >> C >> X >> Y;

    long long ans = 1234567812390;

    for(int i; i < 201010; i++){

        long long sm = i * C;

        long long x = X - i / 2;

        long long y = Y - i / 2;

        if(x > 0) sm += x * A;

        if(y > 0) sm += y * B;

        if(ans > sm) ans = sm;

    }

    cout << ans << endl;

    return 0;

}