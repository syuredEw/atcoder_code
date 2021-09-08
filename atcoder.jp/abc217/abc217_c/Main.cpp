#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;
    int p[N+9], q[N+9];
    for(int i = 0; i < N; i++) cin >> p[i];
    int pot = 0;
    for(int i = 0; i < N; i++){
        pot = p[i] - 1;
        q[pot] = i + 1;
    }
    for(int i = 0; i < N; i++) cout << q[i] << " ";
    cout << endl;
}