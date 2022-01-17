#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ansMax = 0, ansMin = 1000, cnt = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == 'I'){
            cnt++;
        }else{
            cnt--;
        }
        ansMax = max(ansMax, cnt);
        ansMin = min(ansMin, cnt);
    }
    cout << ansMax << endl;
}
