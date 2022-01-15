#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int a[3];
    for(int i = 0; i < S.size(); i++){
        a[i] = (int)(S[i] - '0');
    }

    cout << a[0] * 100 + a[0] * 10 + a[0] + a[1] * 100 + a[1] * 10 + a[1] * 1 + a[2] * 100 + a[2] * 10 + a[2] << endl;
}
