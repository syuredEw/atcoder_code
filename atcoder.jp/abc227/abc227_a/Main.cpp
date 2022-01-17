#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, A;
    cin >> N >> K >> A;
    K %= N;
    K += (A-1);
    if(K > N) cout << K - N << endl;
    else if(K == 0) cout << 1 << endl;
    else cout << K << endl;
}
