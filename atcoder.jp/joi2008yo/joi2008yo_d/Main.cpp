#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    int ans_x, ans_y;
    cin >> M;
    vector<int> star_x(M), star_y(M);
    for(int i = 0; i < M; i++){
        cin >> star_x[i] >> star_y[i];
    }
    cin >> N;
    vector<int> coordinate_x(N), cooradinate_y(N);
    for(int i = 0; i < N; i++){
        cin >> coordinate_x[i] >> cooradinate_y[i];
    }
    //1からの座標差
    vector<int> x_star(M), y_star(M);
    for(int i = 0; i < M; i++){
        x_star[i] = star_x[i] - star_x[0];
        y_star[i] = star_y[i] - star_y[0];
    }
    //全探索 coordinate_x + x_star = 
    for(int i = 0; i < N ; i++){
        int ok = 0;
        for(int j = 0; j < M; j++){
            int zahyo_x, zahyo_y;
            zahyo_x = coordinate_x[i] + x_star[j];
            zahyo_y = cooradinate_y[i] + y_star[j];
            for(int k = 0; k < N; k++){
                if(zahyo_x == coordinate_x[k] && zahyo_y == cooradinate_y[k])
                    ok++;
            }
        }
        if(ok == M){
                ans_x = -star_x[0] + coordinate_x[i];
                ans_y = -star_y[0] + cooradinate_y[i];
                cout << ans_x << " " << ans_y << endl;
                return 0;
        }
    }
}
