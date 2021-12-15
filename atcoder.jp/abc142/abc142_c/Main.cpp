#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        a--;
        A[a] = i;
    }
    for(int i = 0; i < N; i++){
        cout << A[i]+1 << " ";
    }
    cout << endl;
}
