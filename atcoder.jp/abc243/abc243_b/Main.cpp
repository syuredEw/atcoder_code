#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i]; 

    int cntone = 0, cntwo = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i] == B[j]){
                if(i == j) cntone++;
                else cntwo++;
            }
        }
    }
    cout << cntone << endl;
    cout << cntwo << endl;
}