#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;
    vector<long long> A(M+1, 0);
    for(int i = 0; i < M; i++) cin >> A[i];
    sort(A.begin(), A.end());
    A.push_back(N+1);
    long long haba = 1000000000;
    for(int i = 0; i < A.size()-1; i++){
        if(haba > (A[i+1] - A[i]-1) && (A[i+1] - A[i]-1) > 0){
            haba = A[i+1] - A[i]-1;
        }
        //cout << A[i + 1] - A[i] - 1 << endl;
    }

    //cout << haba << endl;
    long long ans = 0;
    for(int i = 0; i < A.size()-1; i++){
        if((A[i+1] - A[i] - 1) % haba != 0 && haba > 1){
            ans++;
        }
        ans += ((A[i+1] - A[i] - 1) / haba);
        //cout << ans << endl;
    }
    cout << ans << endl;

}
