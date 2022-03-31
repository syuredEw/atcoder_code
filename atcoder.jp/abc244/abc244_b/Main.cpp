#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    int x = 0, y = 0;
    int east = 1;

    for(int i = 0; i < N; i++){
        if(S[i] == 'S'){
            if(east == 1) x++;
            else if(east == 2) y--;
            else if(east == 3) x--;
            else y++;
        }else{
            east++;
            if(east > 4) east = 1;
        }
    }
    cout << x << " " << y << endl;
}