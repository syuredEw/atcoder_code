#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int K;
    cin >> K;
    int ans = 0;
    for(int i = 1; i <= N; i++){
        int x;
        cin >> x;
        int disx = 2 * x, disk = 2 * (K - x);
        ans += min(disx, disk);
    }
    cout << ans << endl;
    
}
