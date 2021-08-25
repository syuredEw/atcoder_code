#include <iostream>
using namespace std;

int solve(int n){
    int cnt = 0;
    while(1){
        if(n % 2 == 1) break;
        cnt++;
        n /= 2;    
    }
    return cnt;
}
int main(){
    int N, cnt = 0, ans = 1, wa;
    cin >> N;
    for(int i = 1; i <= N; i++){
        wa = solve(i);
        if(wa > cnt){
            ans = i;
            cnt = wa;
        }
    }

    cout << ans << endl;
    return 0;
}
