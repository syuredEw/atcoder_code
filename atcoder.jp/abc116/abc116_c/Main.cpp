#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> h(N);
    for(int i = 0; i < N; i++){
        cin >> h[i];
    }
    long long cnt = 0;
    while(1){
        bool ok = true;
        for(int i = 0; i < N; i++){
            if(h[i] > 0) ok = false;
        }
        if(ok) break;
        
        bool flag = false;
        for(int i = 0; i < N; i++){
            if(!flag && h[i] > 0){
                flag = true;
                h[i]--;
            }else if(flag && h[i] > 0){
                h[i]--;
            }else if(flag && h[i] == 0){
                break;
            }else{
                continue;
            }
        }
        
        cnt++;
    }
    cout << cnt << endl;
}