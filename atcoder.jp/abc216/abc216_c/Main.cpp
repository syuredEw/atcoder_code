#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    int cnt = 0;
    string S = "";
    while(1){
        if(N % 2 == 1){
            N -= 1;
            S+= "A";
        }
        else{
            N /= 2;
            S += "B";
        }
        cnt++;
        if(N == 0) break;
    }
    string ans (S.rbegin(), S.rend());
    cout << ans << endl;
}