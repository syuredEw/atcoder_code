#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    set<vector<int>> st;
    for(int i = 0; i < N; i++){
        int L;
        cin >> L;
        vector<int> lin(L);
        for(int l = 0; l < L; l++){
            cin >> lin[l];
        }
        st.insert(lin);
    }
    cout << (int)st.size() << endl;
}
