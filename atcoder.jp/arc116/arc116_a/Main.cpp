#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        long long a;
        cin >> a;
        if(a % 2 == 0 && a % 4 != 0) cout << "Same" << endl;
        else if(a % 4 == 0) cout << "Even" << endl;
        else cout << "Odd" << endl;
    }
}
