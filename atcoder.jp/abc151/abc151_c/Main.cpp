#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> wa(N);
    vector<string> pro(M);
    vector<bool> jud(N+1, false);
    long long ans_ac = 0, ans_wa = 0;

    for(int i = 0; i < M; i++){
        int a;
        cin >> a >> pro[i]; a--;
        if(pro[i] == "WA" && jud[a] == false) wa[a]++;
        else if (pro[i] == "AC"){
            jud[a] = true;
        }
    }
    for(int i = 0; i < N; i++){
        if(jud[i] == true) {
            ans_ac++;
            ans_wa += wa[i];
        }
    }

    
    cout << ans_ac << " " << ans_wa << endl;
}