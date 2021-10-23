#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    int A[55][55];
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
          int a = 0;
          cin >> a;
          A[i][j] = a;
        }
    }
    bool ok = true;
  	//cout << A[0][0] << endl;
    for(int i1 = 0; i1 < H-1; i1++){
        for(int i2 = i1+1; i2 < H; i2++){
            for(int j1 = 0; j1 < W-1; j1++){
                for(int j2 = j1+1; j2 < W; j2++){
                    if((A[i1][j1] + A[i2][j2]) > (A[i2][j1] + A[i1][j2])){
                      ok = false;
                    }
                }
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}