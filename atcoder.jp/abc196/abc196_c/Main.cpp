#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    int ans = 0;
    for(long long i = 1; i < N; i++){
        auto str = to_string(i);
        string str1 = str + str;
        long long num = stoll(str1);
        if(N < num) break;
        ans++;
    }
    cout << ans << endl;
}
