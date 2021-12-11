#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    map<string, int> mp;
    int ans = 0;
    string AN;
    vector<string> Si;
    for(int i = 0; i < N; i++){
        string S;
        cin >> S;
        mp[S]++;
        Si.push_back(S);
    }
    for(auto x : Si){
        if(mp[x] > ans){
            ans = mp[x];
            AN = x;
        }
    }
    cout << AN << endl;
}
