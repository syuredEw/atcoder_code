#include <bits/stdc++.h>
using namespace std;

int main(){
    int P = 26;
    vector<int> ans(P+1);
    for(int i = 0; i < P; i++){
        int p; cin >> p;
        char ans = 'a' + p -1;
        cout << ans;
    }
    cout << "\n";

}
