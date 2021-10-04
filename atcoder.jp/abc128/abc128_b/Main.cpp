#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    pair<pair<string, int>, int> pairs[110];
    for(int i = 0; i < N; i++){
        string s;
        int ten;
        cin >> s >> ten;
        pairs[i]=make_pair(make_pair(s, -ten), i);
    }
    sort(pairs, pairs+N);
    for(int i = 0; i < N; i++){
        cout << pairs[i].second+1 << endl;
    }
    return 0;
}