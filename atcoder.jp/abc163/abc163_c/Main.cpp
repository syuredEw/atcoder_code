#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), sum(N, 0);
    
    for(int i = 0; i < N-1; i++){
        int a;
        cin >> a;
        sum[a-1] += 1;
    }
    for(int i = 0; i < N; i++){
        cout << sum[i] << endl;
    }
}