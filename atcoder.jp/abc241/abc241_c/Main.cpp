#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];
    bool ok = false;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            //縦
            int tate = 0, yoko = 0, naname = 0;
            for(int t = 0; t < 6; t++){
                if(t + j < N){
                    if(S[i][j+t] == '#') tate++;
                    else yoko++;
                }
            }
            if(tate >= 4 && tate + yoko == 6) ok = true;
            tate = 0;
            yoko = 0;
            for(int y = 0; y < 6; y++){
                if(y + i < N){
                    if(S[i + y][j] == '#') yoko++; 
                    else tate++;
                }
            }
            if(yoko >= 4 && tate + yoko == 6) ok = true;
            tate = 0;
            for(int na = 0; na < 6; na++){
                if(na + i < N && na + j < N){
                    if(S[na + i][na + j] == '#') naname++;
                    else tate++;
                }
            }
            if(naname >= 4 && tate + naname == 6) ok = true;
            naname = 0;
            tate = 0;
            for(int na = 0; na < 6; na++){
                if(na + i < N && j - na >= 0){
                    if(S[na + i][j - na] == '#') naname++;
                    else tate++;
                }
            }
            if(naname >= 4 && tate + naname == 6) ok = true;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}