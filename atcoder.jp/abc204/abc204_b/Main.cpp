#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    long long sum = 0;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        if(num <= 10) continue;
        else{
            num -= 10;
            sum += num;
        }
    }
    cout << sum << endl;

}