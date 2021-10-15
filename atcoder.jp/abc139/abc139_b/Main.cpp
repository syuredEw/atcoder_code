#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin  >> A >> B;
    int ans = 0, plag = 1;
    while (plag < B)
    {
        plag += A - 1;
        ans++;
    }
    cout << ans <<endl;
    
}