#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long double> dis_x(N), dis_y(N), ne_per(N);

    for(int i = 0; i < N; i++){
        cin >> dis_x[i] >> dis_y[i];
        ne_per[i] = i;
    }
    long double ans = 0;
    long double cnt = 0;
    do{
        long double sum = 0;
        for(int i = 0; i < N-1; i++){
            long double dx = dis_x[ne_per[i+1]] - dis_x[ne_per[i]], dy = dis_y[ne_per[i+1]] - dis_y[ne_per[i]];
            sum += sqrt(dx * dx + dy * dy);
        }
        ans += sum;
        cnt++;
    }while(next_permutation(ne_per.begin(), ne_per.end()));
    ans /= cnt;
    cout << fixed << setprecision(10) << ans << endl;
}