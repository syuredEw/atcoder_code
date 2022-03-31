#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long L, R;
    cin >> L >> R;

    queue<pair<long, long>> que;
    que.emplace(L, R);

    while (!que.empty())
    {
        auto p = que.front();
        que.pop();
        long long l = p.first, r = p.second;
        if(gcd(l, r) == 1){
            cout << r - l << endl;
            return 0;
        }else{
            que.emplace(l+1, r);
            que.emplace(l, r-1);
        }
    }
    
}