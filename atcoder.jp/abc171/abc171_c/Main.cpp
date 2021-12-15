#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    string ans = "";
    while (N>0)
    {
        N--;
        ans += (N % 26);
        N /= 26;
    }
    for(int i = ans.size()-1; i >= 0; i--){
        char an = ans[i] + 'a';
        if(an == '`') cout << 'z'; 
        else cout << an;
    }
    cout << endl;
}