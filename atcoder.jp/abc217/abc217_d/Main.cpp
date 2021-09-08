#include <bits/stdc++.h>
using namespace std;

int main(){
    int L, Q;
    cin >> L >> Q;
    int c[Q+5], x[Q+5];
    for(int i = 0; i < Q; i++) cin >> c[i] >> x[i];
    set<int> st;
    st.insert(0);
    st.insert(L);
    for(int i = 0; i < Q; i++){
        if(c[i] == 1){
            st.insert(x[i]);
        }
        else if(c[i] == 2){
            auto it = st.lower_bound(x[i]);
            auto a = prev(it);
            cout << *it - *a << endl; //出力
        }
    }
}
