#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    int k;
    cin >> S >> k;
    vector<string> ssum;
    set<string> sset;
    for(int i = 0; i < S.size(); i++){
        string ad = "";
        for(int j = 0; j < min((int)S.size() - i, 6); j++){
            ad += S[i+j];
            if(sset.count(ad) == 0){
                ssum.push_back(ad);
                sset.insert(ad);
            }
        }
    }
    sort(ssum.begin(), ssum.end());

    cout << ssum[k-1] << endl;
}