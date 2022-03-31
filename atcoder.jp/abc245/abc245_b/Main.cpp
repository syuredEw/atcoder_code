#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(2005, 0);
    for(int i = 0; i < N; i++){
       int a;
       cin >> a;
       A[a] += 1;
    }
    for(int i = 0; i < 2002; i++){
        if(A[i] == 0){
            cout << i << endl;
            return 0;
        }
    }

}