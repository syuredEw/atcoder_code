#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> table(1001, 0);
    vector<int> a(N), b(N);
    for(int i = 0; i< N; i++){
        cin >> a[i];
    }
    for(int i = 0; i< N; i++){
        cin >> b[i];
        b[i]++;
    }
    for(int i = 0; i < N; i++){
        table[a[i]]++;
        table[b[i]]--;
    }

    for(int i = 1; i <= 1000; i++){
        if(0 < i) table[i] += table[i-1];
    }
    int ans = 0;
    for(int i = 1; i <= 1000; i++){
        if(N == table[i]) ans++;
       // cout << table[i] << endl;
    }
    cout << ans <<endl;
    return 0;
}
