#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    long double x0, y0, x2, y2, ans_x, ans_y;
    cin >> x0 >> y0;
    cin >> x2 >> y2;
    x2 = (x0 + x2) / 2;
    y2 = (y0 + y2) / 2;
    long double theta = 2 * M_PI / N;
    ans_x = (x0 - x2) * cos(theta) - (y0 - y2) * sin(theta);
    ans_y = (x0 - x2) * sin(theta) + (y0 - y2) * cos(theta);
    cout << fixed << setprecision(10) << ans_x + x2 << " " << ans_y  + y2<< endl;

}