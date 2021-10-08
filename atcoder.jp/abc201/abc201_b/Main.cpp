#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<pair<int, string>> pairs(N);
    for(int i = 0; i < N; i++){
        int t;
        string s;
        cin >> s >> t;
        pairs[i] = make_pair(-t, s);
    }
    sort(pairs.begin(), pairs.end());

    cout << pairs[1].second << endl;
}