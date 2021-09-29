#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    map<string, int> memo;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        memo[s]++;
    }
    int mav = 0;
    for(const auto& x :memo){
        int v = x.second;
        mav = max(mav, v);
    }
    for(auto it = memo.begin(); it != memo.end(); it++){
        if(it -> second == mav) cout << it -> first << endl;
    }
}