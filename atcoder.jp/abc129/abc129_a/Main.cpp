#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> P(3);
    for(int i = 0; i < 3; i++) cin >> P[i];
    sort(P.begin(), P.end());
    cout << P[0] + P[1] << endl;
}
