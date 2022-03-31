#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;
    long long C = B - A;
    if(C % 2 == 0){
        cout << A + C / 2 << endl;
    }else cout << "IMPOSSIBLE" << endl;
}
