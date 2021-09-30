#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, cnt = 0, ans = 0;
    cin >> N;
    for(int i = 1; 2*i - 1 <= N; i++){ 
        int b = 2 * i - 1;
        cnt = 0;
        for(int j = 1; j * j <= b; j++){  
            if(b % j == 0){
                cnt++;
                if(j * j != b) cnt++;
            }
        }
        if(cnt == 8) ans++;
        //cout << 2*i-1 <<":"<< cnt << endl;
    }
    cout << ans << endl;
}