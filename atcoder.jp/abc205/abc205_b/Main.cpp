#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N; cin >> N;
    vector<int> A(N, 0);
    for(int i = 0; i< N; i++){
        int a;
        cin >> a;
        a--;
        A[a]++;
    }
    for (int i = 0; i < N; i++)
    {
        if(A[i] == 0 || A[i] >= 2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}