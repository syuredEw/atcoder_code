#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; 
    cin >> N;
    vector<int> cnt(N);
    for(int i = 0; i < N-1; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        cnt[a]++; cnt[b]++;
    }
    for(int i = 0; i < N; i++){
        if(cnt[i] == N-1){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
