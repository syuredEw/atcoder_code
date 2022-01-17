#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    long double ans = -1.0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            long double dis = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if(dis > ans) ans = dis;
        }
    }
    cout << setprecision(10)<< ans << endl;
}
