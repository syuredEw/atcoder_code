#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int sum = 0;
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            sum += (i * j);
        }
    }
    sum -= N;

    for(int i = 1; i <= 9; i++){
        if(sum % i == 0 && sum / i < 10){
            cout << i << " x " << sum / i << endl;
        }
    }
}
