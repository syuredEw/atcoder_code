#include <bits/stdc++.h>
using namespace std;

int main(){
    int P;
    cin >> P;
    int coin[11];
    coin[0] = 1;
    for(int i = 1; i < 10; i++){
        coin[i] =coin[i-1] * (i+1);
    }
    int cnt = 0;
    for(int i = 9; i >= 0; i--){
        cnt += P / coin[i];
        P %= coin[i];
    }
    cout << cnt << endl;
}
