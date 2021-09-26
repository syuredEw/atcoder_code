#include <bits/stdc++.h>
using namespace std;

int main(){
    string X;
    cin >> X;
    vector<int> dict(26);
    for(int i = 0; i < 26; i++){
        dict[X[i] - 'a'] = i;
    }
    int N;
    cin >> N;
    vector<vector<int>> S(N);
    for(vector<int>& v : S){
        string s;
        cin >> s;
        for(const char c : s){
            v.push_back(dict[c - 'a']);
        }
    }
    sort(begin(S), end(S));

    for(const vector<int>& s : S){
        for(const int x :s){
            cout << X[x];
        }
        cout << endl;
    }
    return 0;
}