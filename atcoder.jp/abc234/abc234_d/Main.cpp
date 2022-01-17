#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    set<int> st;
    int ans = N;
    for (int i = 0; i < K; i++)
    {
        int p;
        cin >> p;
        st.insert(p);
        if(p < ans) ans = p;
    }

    cout << ans << endl;

    for (int i = K; i < N; i++)
    {
        int p;
        cin >> p;
        if(p > ans){
            st.insert(p);
            st.erase(ans);
            auto iter = st.upper_bound(ans);
            ans = *iter;
            cout << ans << endl;
        }
        else{
            cout << ans << endl;
        }  
    }
}
