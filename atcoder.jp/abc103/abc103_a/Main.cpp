#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A(3);
    for(int i = 0; i < 3; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    cout << A[2]  - A[0] << endl;
}
