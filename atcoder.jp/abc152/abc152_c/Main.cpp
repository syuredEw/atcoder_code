#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> p(N);
    stack<int> a;
    int cnt = 1;
    for(int i = 0; i < N; i++){
        cin >> p[i];
    }
    a.push(p[0]);
    for(int i = 1; i < N; i++){
        if(a.top() >= p[i]){
            cnt++;
            a.push(p[i]);
        }
    }
    cout << cnt << endl;
}