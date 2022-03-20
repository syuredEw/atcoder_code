#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> check(2*N+3, 0);
    check[1] = 1;
    cout << 1 << "\n";
    for(int i = 0; i < N; i++){
        int aoki;
        cin >> aoki;
        check[aoki] = 1;
        for(int j = 1; j <= 2 * N + 1; j++){
            if(check[j] == 0){
                cout << j << "\n";
                check[j] = 1;
                break;
            }
        }
    }
}