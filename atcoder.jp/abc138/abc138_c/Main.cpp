#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long double> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < N-1; i++){
        int si = v.size();
        long double a = v.back(); v.pop_back();
        long double b = v.back(); v.pop_back();
        v.push_back((a+b)/2);
    }
    cout << v[0] << endl;
}  
