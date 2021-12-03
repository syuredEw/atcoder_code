#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N >= 42){
        cout << "AGC0" << N+1 << endl;
    }else if (N > 9){
        cout <<"AGC0" << N << endl;
    }else{
        cout << "AGC00" << N << endl;
    }
}
