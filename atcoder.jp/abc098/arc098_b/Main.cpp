#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];

    long long res = 0;
    int right = 0;
    int sum = 0;
    for(int left = 0; left < N; left++){
        while(right < N && (sum + a[right]) == (sum ^ a[right])){
            sum += a[right];
            right++;
        }
        res += right -left;

        if(left == right) right++;
        else sum -= a[left];
    }
    cout << res << endl;
}