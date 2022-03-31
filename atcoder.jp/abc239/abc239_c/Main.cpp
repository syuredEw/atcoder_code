#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<pair<long long, long long>> a1, a2;

    a1.push_back(make_pair(x1 + 2, y1 + 1));
    a1.push_back(make_pair(x1 + 2, y1 - 1));
    a1.push_back(make_pair(x1 + 1, y1 + 2));
    a1.push_back(make_pair(x1 + 1, y1  - 2));
    a1.push_back(make_pair(x1 - 2, y1 + 1));
    a1.push_back(make_pair(x1 - 2, y1 - 1));
    a1.push_back(make_pair(x1 - 1, y1 + 2));
    a1.push_back(make_pair(x1 - 1, y1 - 2));

    a2.push_back(make_pair(x2 + 2, y2 + 1));
    a2.push_back(make_pair(x2 + 2, y2 - 1));
    a2.push_back(make_pair(x2 + 1, y2 + 2));
    a2.push_back(make_pair(x2 + 1, y2 - 2));
    a2.push_back(make_pair(x2 - 2, y2 + 1));
    a2.push_back(make_pair(x2 - 2, y2 - 1));
    a2.push_back(make_pair(x2 - 1, y2 + 2));
    a2.push_back(make_pair(x2 - 1, y2 - 2));

    bool ok = false;
    for(int i = 0; i < 8 ;i++){
        for(int j = 0; j < 8; j++){
            if(a1[i].first == a2[j].first && a1[i].second == a2[j].second) ok = true;
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}

