#include <bits/stdc++.h>
using namespace std;

int main(){
    long long H;
    int N;
    cin >> H >> N;
    vector<int> A(N);
    long long sum = 0;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        sum += a;
    }
    if(sum >= H) cout << "Yes" << endl;
    else cout << "No" << endl;

}
