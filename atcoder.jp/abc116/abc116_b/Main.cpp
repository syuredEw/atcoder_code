#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s;
    int ans ;
    if(s == 4 || s == 2 || s == 1){
        cout << 4 << endl;
        return 0;
    }
    for(int i = 2; i <= 1000000; i++){
        if(s % 2 == 0) s /= 2;
        else s = 3 * s + 1;
        if(s == 4){
            ans = i + 3;
            break;
        }
    }
    cout << ans << endl;
}