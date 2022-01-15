#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    set<long long> st;
    vector<long long> a(N);
    vector<pair<long long, int>> ans(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
        ans[i] = make_pair(a[i], i+1);
        st.insert(a[i]);
    }

    sort(ans.begin(), ans.end());
    sort(a.begin(), a.end());

    for(int q = 0; q < Q; q++){
        long long x, k;
        cin >> x >> k;
        auto iter = lower_bound(a.begin(), a.end(), x);
        int b = iter - a.begin();
        if(st.count(x) == 0 || b + k - 1 >= N||ans[b + k-1].first != x) cout << -1 << endl;
        else{
            cout << ans[b + k-1].second << endl;
        }
    }
}
