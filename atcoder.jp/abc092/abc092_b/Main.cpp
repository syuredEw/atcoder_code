#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int D, X;
    cin >> D >> X;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        if(D % a == 0){
            X += (D / a);
        }else{
            X += (D / a + 1);
        }
    }
    cout << X << endl;
}