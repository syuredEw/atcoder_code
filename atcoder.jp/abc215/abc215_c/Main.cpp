#include <bits/stdc++.h>
using namespace std;

string S, T;
int K, l;
vector<string> res;

int main(){
    cin >> S >> K;
    sort(S.begin(), S.end());
    while(K > 1){
        next_permutation(S.begin(), S.end());
        K--;
        //cout << S << endl;
    }
    cout << S << endl;
    return 0; 
}