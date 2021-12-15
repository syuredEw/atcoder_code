#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<bool> ans(100010, true);
    vector<int> cnt(100010, 0);
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        for(int i = 1; i * i <= a; i++){
            if(a % i == 0){
                cnt[i]++;
                cnt[a/i]++;
            }
        }
    }

    for(int i = 2; i <= M; i++){
        if(cnt[i] != 0){
            int stac = 1;
            while(stac * i <= M){
                ans[stac*i] = false;
                ++stac;
            }
        }
    }
    int count = 0;
    for(int i = 1; i <= M; i++){
        if(ans[i]) count++;
    }
    cout << count <<endl;
    for(int i = 1; i <= M; i++){
        if(ans[i]) cout << i << endl;
    }

    
}