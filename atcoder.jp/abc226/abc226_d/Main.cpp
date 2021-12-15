#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b){
    if(a % b == 0){
        return b;
    }else{
        return GCD(b, a%b);
    }
}
int main(){
    int N;
    cin >> N;
    set<pair<long long, long long>> ans;
    vector<pair<long long, long long>> xy(N);
    for(int i = 0; i < N; i++){
        long long x, y;
        cin >> x >> y;
        xy[i] = make_pair(x, y);
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j) continue;
            long long dis_x = xy[j].first - xy[i].first, dis_y = xy[j].second - xy[i].second;
            if(dis_x == 0 && dis_y != 0){
                dis_y /= abs(dis_y);
            } else if(dis_y == 0 && dis_x != 0){
                dis_x /= abs(dis_x);
            }
            else{
                long long GC;
                if(dis_x >= dis_y){
                    GC = GCD(abs(dis_x), abs(dis_y));
                }else{
                    GC = GCD(abs(dis_y), abs(dis_x));
                }
                dis_x /= GC;
                dis_y /= GC;
            }
           // cout << dis_x << " " << dis_y << endl;
            ans.insert(make_pair(dis_x, dis_y));
        }
    }
    cout << ans.size() << endl;
}
