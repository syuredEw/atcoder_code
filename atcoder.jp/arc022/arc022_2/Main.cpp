#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int res = 0;
    int right = 0;
    set<int> member;

    for(int left = 0; left < n; left++){
        while (right < n && !member.count(a[right]))
        {
            member.insert(a[right]);
            right++;
        }
        res = max(res, (right - left));
        
        if(left == right) right++;
        else member.erase(a[left]);
    }
    cout << res << endl;
}