#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> S(N);
    vector<bool> jud(N, false);
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }

    for(int a = 1; a < 400; a++){
        for(int b = 1; b < 400; b++){
            long long mem = 4 * a * b + 3 * a + 3 * b;
            for(int i = 0; i < N; i++){
                if(mem == S[i]) jud[i] = true;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < jud.size(); i++){
        if(!jud[i]) cnt++;
    }
    cout << cnt << endl;
}
