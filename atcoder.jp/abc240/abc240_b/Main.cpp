#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    set<long long> st;

    for(int i = 0; i<N; i++){
        long long a;
        cin >> a;
        st.insert(a);
    }

    cout << st.size() << endl;
}
