#include <bits/stdc++.h>
using namespace std;

int solve(string &s){
    int cnt = 0;
    if(s == "ABC") cnt += 1;
    else if(s == "ARC") cnt += 2;
    else if(s == "AGC") cnt += 4;
    else if(s == "AHC") cnt += 8;
    return cnt;
}

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >>s3;
    int cnt = 0;
    cnt += solve(s1);
    cnt += solve(s2);
    cnt += solve(s3);
    if(cnt == 14) cout << "ABC" << endl;
    if(cnt == 13) cout << "ARC" << endl;
    if(cnt == 11) cout << "AGC" << endl;
    if(cnt == 7) cout << "AHC" << endl;
    
}