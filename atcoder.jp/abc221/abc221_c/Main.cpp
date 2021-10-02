#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    string N;
    cin >> N;
    sort(N.begin(), N.end());
    int ans = 0;
    //cout << N <<endl;
    do{
        for(int i = 1; i < N.size(); i++){
            string r = "", l = "";
            for(int j = 0; j < i; j++) l += N[j];
            for(int j = i; j < N.size(); j++) r += N[j];
            ans = max(ans, stoi(r) * stoi(l));
        }
    }while(next_permutation(N.begin(), N.end()));
    cout << ans << endl;
}