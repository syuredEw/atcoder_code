#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(21);
    a[0] = 100;
    a[1] = 100;
    a[2] = 200;

    for(int i = 3; i < 20; i++){
        a[i] = a[i-2] + a[i-1] + a[i-3];
    }
    cout << a[19] << endl;
}
