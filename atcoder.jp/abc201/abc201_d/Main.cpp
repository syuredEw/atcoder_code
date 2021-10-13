#include <bits/stdc++.h>
using namespace std;
int A[2010][2010];


int main(){
    int H, W;
    cin >> H >> W;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            char a;
            cin >> a;
            if(a == '+') A[i][j] = 1;
            else A[i][j] = -1;
        }
    }
    int dp_ta[H][W];
    memset(dp_ta, -123456789, sizeof(dp_ta));
    dp_ta[H-1][W-1] = 0;
    for(int h = H - 1; h >= 0; h--){
        for(int w = W -1; w >= 0; w--){
                if( h ==H-1 &&w == W-1) continue; 
                if(h < H-1) dp_ta[h][w] = max(dp_ta[h][w], -dp_ta[h+1][w] + A[h+1][w]);
                if(w < W-1) dp_ta[h][w] = max(dp_ta[h][w], -dp_ta[h][w+1] + A[h][w+1]);
        }
    }
    if(dp_ta[0][0] > 0) cout << "Takahashi" << endl;
    else if(dp_ta[0][0] < 0) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}