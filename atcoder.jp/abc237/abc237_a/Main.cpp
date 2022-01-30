#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    if(-pow(2, 31) <= N && pow(2, 31) > N) cout << "Yes" << endl;
    else cout << "No" << endl;
}
