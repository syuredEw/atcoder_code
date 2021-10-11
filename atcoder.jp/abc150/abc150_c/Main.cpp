#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> P(N), Q(N), num(N);
    for(int i = 0; i < N; i++){
        num[i] = i+1;
        cin >> P[i];
    }
    for(int i = 0; i < N; i++) cin >> Q[i];
    int a = 0, b = 0, cnt = 1;
    do
    {
        bool oka = true, okb = true; 
        for(int i = 0; i < N; i++){
            if(num[i] != P[i]) oka = false;
            if(num[i] != Q[i]) okb = false;
        }
        if(oka) a = cnt;
        if(okb) b = cnt;
        cnt++;
    } while (next_permutation(num.begin(), num.end()));
    cout << abs(b - a) << endl;
    
}