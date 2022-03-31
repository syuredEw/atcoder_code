#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    bool ok = false;
    map<long long, vector<pair<long long, char>>> mp;
    vector<long long> x(N), y(N);
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    string S;
    cin >> S;
    for(int i = 0; i < N; i++){
        mp[y[i]].push_back(make_pair(x[i], S[i]));
    }
    set<long long> seen;
    for(int i = 0; i < N; i++){
        if(seen.count(y[i]) == 1) continue;

        vector<pair<long long, char>> crash = mp[y[i]];
        seen.insert(y[i]);
        long long minr = 1234567899, maxl = -1;
        for(int j = 0; j < (int)crash.size(); j++){
            if(crash[j].second == 'R') minr = min(minr, crash[j].first);
            else if(crash[j].second == 'L') maxl = max(maxl, crash[j].first);
        }
        if(minr < maxl) ok = true;
        //cout << minr << "," << maxl << "," << y[i] << endl;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;


}