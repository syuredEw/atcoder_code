#include <bits/stdc++.h>
using namespace std;

int main(){
    long long ans = 0, N;
    cin >> N;
    if(N < 999){
        cout << 0 << endl;
        return 0;
    }if(N > 999){
        ans += N - 999;
    }if(N > 999999){
        ans += N - 999999;
    }if(N > 999999999){
        ans += N - 999999999;
    }if(N > 999999999999){
        ans += N - 999999999999;
    }if(N > 999999999999999){
        ans++;
    }
    cout << ans << endl;
    

}