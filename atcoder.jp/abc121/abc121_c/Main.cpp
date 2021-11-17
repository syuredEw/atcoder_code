#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, sum = 0;
    cin >> N >> M;
    vector<pair<long long, int>> AB(N);
    for(int i = 0; i < N; i++){
        long long a;
        int b;
        cin >> a >> b;
        AB[i] = make_pair(a, b);
    }
    long long ans = 0;
    sort(AB.begin(), AB.end());

    for(int i = 0; i < N; i++){
        if(M < sum + AB[i].second){
            ans += (AB[i].first * (M - sum));
            break;
        }
        else{
            sum += AB[i].second;
            ans += AB[i].first * AB[i].second;
        }
    }
    cout << ans << endl;
}
