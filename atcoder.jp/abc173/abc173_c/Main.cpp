#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<char>> table(H+1, vector<char>(W+1));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++) cin >> table[i][j];
    }
    vector<int> h(H), w(W);
    int ans = 0;
    for(int bith = 0; bith < (1 << H); bith++){
        for(int bitw = 0; bitw < (1 << W); bitw++){
            vector<vector<char>> check = table;
            for(int i = 0; i < H; i++){
                if(bith & (1 << i)){
                    for(int j = 0; j < W; j++){
                        check[i][j] = 'a';
                    }
                }
            }
            for (int i = 0; i < W; i++)
            {
                if (bitw & (1 << i))
                {
                    for (int j = 0; j < H; j++)
                    {
                        check[j][i] = 'a';
                    }
                }
            }
            int cnt = 0;
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < W; j++){
                    if(check[i][j] == '#') cnt++;
                }
            }
            if(cnt == K) ans++;
        }
    }
     cout << ans << endl;
}