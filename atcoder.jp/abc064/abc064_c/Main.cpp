#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> color(10, 0);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        a /= 400;
        if(a > 7) a = 8;
        color[a]++;
    }
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        if(color[i] > 0) cnt++;
    }
    
    if(cnt == 0 && color[8] > 0) cout << 1 << " ";
    else cout << cnt << " ";  
    cout << cnt + color[8] << endl; 
}