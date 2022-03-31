#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<vector<long long> > A(H, vector<long long>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < W; i++){
        for(int j = 0; j < H; j++){
            cout << A[j][i] << " ";
        }
        cout << "\n";
    }
}
