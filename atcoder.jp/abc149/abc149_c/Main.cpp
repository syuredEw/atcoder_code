#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int X;
    cin >> X;
    while (1)
    {
        bool ok = true;
        for(int i = 2; i * i <= X; i++){
            if(X % i == 0){
                ok = false;
                break;
            }
        }
        if(ok) break;
        X++;
    }
    cout << X << endl;
    
}