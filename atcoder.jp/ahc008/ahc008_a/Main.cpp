#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> animal_table(32, vector<int>(32, 0)), human_table(32, vector<int>(32, 0));
vector<int> px, py, hx, hy, phase(10, 0);
//人間が各フェーズにおいてフェンスを置くべきところを示す変数
vector<vector<int>> putFenceudlr{{3, 3, 3, 4, 3, 3, -1}, {3, 4, 3, 3, 3, -1}, {3, 3, 3, -1}, {2, 2, 2, 2, 4, -1}, {2, 2, 2, 2, 2, -1}};
int N, M;
//動物が移動する関数
void animalMove(){
    for(int i = 0; i < N; i++){
        string SN;
        cin >> SN;
        int pt = animal_table[px[i]][py[i]];
        for(int j = 0; j < SN.size(); j++){

            if(SN[j] == 'U'){
                animal_table[px[i]][py[i]] = 0;
                px[i] -= 1;
                animal_table[px[i]][py[i]] = pt;
            }else if(SN[j] == 'D'){
                animal_table[px[i]][py[i]] = 0;
                px[i] += 1;
                animal_table[px[i]][py[i]] = pt;
            }else if(SN[j] == 'L'){
                animal_table[px[i]][py[i]] = 0;
                py[i] -= 1;
                animal_table[px[i]][py[i]] = pt;
            }else if(SN[j] == 'R'){
                animal_table[px[i]][py[i]] = 0;
                py[i] += 1;
                animal_table[px[i]][py[i]] = pt;
            }
        }
    }
    return;
}

//人間を一番上に移動させる
void moveHumanUp(){
    string ans = "";
    for (int i = 0; i < M; i++ )
    {
        if (hx[i] > 0 && human_table[hx[i]-1][hy[i]] == 0)
        {
            human_table[hx[i]][hy[i]] = 0;
            ans += 'U';
            hx[i] -= 1;
            human_table[hx[i]][hy[i]] = 6;
        }
        else
        {
            ans += '.';
        }
    }
    cout << ans << "\n";
} 

//人間が一番上にいるのか確認
bool judgeHumanUpSpace(){
    bool ok = true;
    for (int i = 0; i < M; i++)
    {
        if (hx[i] != 0)
        {
            ok = false;
        }
    }
    return ok;
}

//人間が特定の場所に移動できたか判断する関数
bool judgeHumanCoordinate(vector<int> gotox, vector<int>gotoy){
    bool ok = true;
    for(int i = 0; i < M; i++){
        if(hx[i] != gotox[i] || hy[i] != gotoy[i]){
            ok = false;
        }
    }
    return ok;
}

//その点にフェンスを置くことができるか
bool enablePutFence(int x, int y){
    int pxi, pyi;
    int h[5] = {1, 0, -1, 0, 0}, w[5] = {0, 1, 0, -1, 0};
    bool pk = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 5; j++){
            pxi = px[i] + h[j];
            pyi = py[i] + w[j];
            if(x == pxi && y == pyi) pk = false;
        }
    }
    return pk;
}

//人間が右にフェンスを置く関数
void putFence(){
    string ans = "";
    for(int i = 0; i < M; i++){
        if(hy[i] == 29){
            if(human_table[hx[i]][hy[i]-1] == 0 && enablePutFence(hx[i], hy[i]-1)){
                ans += 'l';
                human_table[hx[i]][hy[i]-1] = -1;
                animal_table[hx[i]][hy[i]-1] = -1;
            }else{
                ans += '.';
            }
        }else{
            if (human_table[hx[i]][hy[i]+1] == 0 && enablePutFence(hx[i], hy[i]+1))
            {
                ans += 'r';
                human_table[hx[i]][hy[i]+1] = -1;
                animal_table[hx[i]][hy[i]+1] = -1;
            }
            else
            {
                ans += '.';
            }
        }
    }
    cout << ans << "\n";
    return;
}

//人間が全員下に行く．
void moveHumanUnder(){
    string ans = "";

    for(int i = 0; i < M; i++){
        //いちばん下にいるときと，下に何かいるときはなにもしない．
        if(hx[i] == 29 || human_table[hx[i]+1][hy[i]] != 0){
            ans += '.';
        }else{
            human_table[hx[i]][hy[i]] = 0;
            hx[i] += 1;
            human_table[hx[i]][hy[i]] = 6;
            ans += 'D';
        }
    }
    cout << ans << "\n";
    return;
}

//特定の座標に人間が移動する関数
void movegotocoordinate(vector<int> &gotox, vector<int> &gotoy){
    string ans = "";
    for(int i = 0; i < M; i++){
        if(hx[i] > gotox[i] && human_table[hx[i]-1][hy[i]] == 0){
            human_table[hx[i]][hy[i]] = 0;
            ans += 'U';
            hx[i] -= 1;
            human_table[hx[i]][hy[i]] = 6; 
        }else if(hx[i] < gotox[i] && human_table[hx[i]+1][hy[i]] == 0){
            human_table[hx[i]][hy[i]] = 0;
            ans += 'D';
            hx[i] += 1;
            human_table[hx[i]][hy[i]] = 6;
        }else if(hy[i] > gotoy[i] && human_table[hx[i]][hy[i]-1] == 0){
            human_table[hx[i]][hy[i]] = 0;
            ans += 'L';
            hy[i] -= 1;
            human_table[hx[i]][hy[i]] = 6;
        }else if(hy[i] < gotoy[i] && human_table[hx[i]][hy[i]+1] == 0){
            human_table[hx[i]][hy[i]] = 0;
            ans += 'R';
            hy[i] += 1;
            human_table[hx[i]][hy[i]] = 6;
        }else{
            ans += '.';
        }
    }
    cout << ans << endl;
}

//特定の人間が左側にフェンスを置く関数
char humanPutfenceLeft(int i, vector<int> &moveorput){
    char ans;
    if (human_table[hx[i]][hy[i]-1] == 0 && enablePutFence(hx[i], hy[i]-1))
    {
        ans = 'l';
        human_table[hx[i]][hy[i]-1] = -1;
        animal_table[hx[i]][hy[i]-1] = -1;
        moveorput[i] = 0;
    }
    else if(!enablePutFence(hx[i], hy[i]-1)){
        ans = '.';
    }else{
        ans = '.';
        moveorput[i] = 0;
    }
    return ans;
}

//右側にフェンスを置く関数
char humanPutfenceRight(int i, vector<int> &moveorput){
    char ans;
    if (human_table[hx[i]][hy[i]+1] == 0 && enablePutFence(hx[i], hy[i]+1))
    {
        ans = 'r';
        human_table[hx[i]][hy[i]+1] = -1;
        animal_table[hx[i]][hy[i]+1] = -1;
        moveorput[i] = 0;
    }
    else if(!enablePutFence(hx[i], hy[i]+1)){
        ans = '.';
    }else{
        ans = '.';
        moveorput[i] = 0;
    }
    return ans;
}

//上側にフェンスを置く関数
char humanPutfenceUp(int i, vector<int> &moveorput){
    char ans;
    if (human_table[hx[i]-1][hy[i]] == 0 && enablePutFence(hx[i]-1, hy[i]))
    {
        ans = 'u';
        human_table[hx[i]-1][hy[i]] = -1;
        animal_table[hx[i]-1][hy[i]] = -1;
        moveorput[i] = 0;
    }
    else if(!enablePutFence(hx[i]-1, hy[i])){
        ans = '.';
    }else{
        ans = '.';
        moveorput[i] = 0;
    }
    return ans;
}

//下側に置く関数
char humanPutfenceDown(int i, vector<int> &moveorput){
    char ans;
    if (human_table[hx[i]+1][hy[i]] == 0 && enablePutFence(hx[i]+1, hy[i]))
    {
        ans = 'd';
        human_table[hx[i]+1][hy[i]] = -1;
        animal_table[hx[i]+1][hy[i]] = -1;
        moveorput[i] = 0;
    }
    else if(!enablePutFence(hx[i]+1, hy[i])){
        ans = '.';
    }else{
        ans = '.';
        moveorput[i] = 0;
    }
    return ans;
}

//人間が目的の座標まで移動するか、柵を置くかを繰り返す関数
void moveOrPutFence(vector<int> &moveorput, vector<int> gotox, vector<int> gotoy){
    string ans = "";
    for(int i = 0; i < M; i++){
        if(i > 4){
            ans += '.';
            continue;
        }
        //移動の関数

        if(moveorput[i] == 0){
            if(hx[i] > gotox[i] && human_table[hx[i]-1][hy[i]] == 0){
                human_table[hx[i]][hy[i]] = 0;
                ans += 'U';
                hx[i] -= 1;
                human_table[hx[i]][hy[i]] = 6; 
                moveorput[i] = 1;
            }else if(hx[i] < gotox[i] && human_table[hx[i]+1][hy[i]] == 0){
                human_table[hx[i]][hy[i]] = 0;
                ans += 'D';
                hx[i] += 1;
                human_table[hx[i]][hy[i]] = 6;
                moveorput[i] = 1;
                
            }else if(hy[i] > gotoy[i] && human_table[hx[i]][hy[i]-1] == 0){
                human_table[hx[i]][hy[i]] = 0;
                ans += 'L';
                hy[i] -= 1;
                human_table[hx[i]][hy[i]] = 6;
                moveorput[i] = 1;

            }else if(hy[i] < gotoy[i] && human_table[hx[i]][hy[i]+1] == 0){
                human_table[hx[i]][hy[i]] = 0;
                ans += 'R';
                hy[i] += 1;
                human_table[hx[i]][hy[i]] = 6;
                moveorput[i] = 1;

            }else{
                ans += '.';
                moveorput[i] = 1;
            }

            //目的の座標に到着したら次の座標を目指すためにフェーズを繰り上げる.
            if(hx[i] == gotox[i] && hy[i] == gotoy[i]){
                phase[i] += 1;
            }
        }else{ 
            //この時0は上にフェンスを億
            if(putFenceudlr[i][phase[i]] == 0){
                ans += humanPutfenceUp(i, moveorput);
            //下にフェンスを億
            }else if(putFenceudlr[i][phase[i]] == 1){
                ans += humanPutfenceDown(i, moveorput);
            //ひだりにおく
            }else if(putFenceudlr[i][phase[i]] == 2){
                ans += humanPutfenceLeft(i, moveorput);
            //右に置く
            }
            else if (putFenceudlr[i][phase[i]] == 3)
            {
                ans += humanPutfenceRight(i, moveorput);
            }
            else if (putFenceudlr[i][phase[i]] == 4) //移動のみなので何もしない.
            {
                ans += '.';
                moveorput[i] = 0;
            }else{
                ans += '.';
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    //動物の入力
    cin >> N;
    px.resize(N);
    py.resize(N);
    for(int i = 0; i < N; i++){
        int x, y, pt;
        cin >> x >> y >> pt;
        x--; y--;
        px[i] = x;
        py[i] = y;
        animal_table[x][y] = pt;
    }

    //人間の入力
    cin >> M;
    hx.resize(M);
    hy.resize(M);

    for(int i = 0; i < M; i++){
        cin >> hx[i] >> hy[i];
        hx[i] -= 1;
        hy[i] -= 1;
        human_table[hx[i]][hy[i]] = 6;
    }

    //300回繰り返す
    //行きたい座標のvector
    vector<int> gotox{10, 4, 11, 12, 29, 6, 7, 19, 27, 0}, gotoy{9, 25, 10, 12, 7, 6, 22, 15, 15, 0};
    bool ok = judgeHumanCoordinate(gotox, gotoy);
    vector<vector<int>> gohumanx{{4, 4, 9, 10, 10, 8, 8}, {4, 5, 10, 10, 3, 3}, {17, 17, 29, 29}, {11, 17, 17, 29, 29, 29}, {29, 25, 25, 29, 29, 29}}, \
                        gohumany{{9, 3, 3, 8, 3, 3, 3}, {19, 25, 25, 19, 19, 19}, {10, 5, 5, 5}, {20, 20, 25, 25, 28, 28}, {11, 11, 21, 21, 26, 26}};
    //柵を置くか移動するかを管理するヴェクター
    vector<int> moveorput(M, 1);
    for(int i = 0; i < 300; i++){
        if(!ok){
            //行きたい座標に移動させる
            movegotocoordinate(gotox, gotoy);

            ok = judgeHumanCoordinate(gotox, gotoy);

            //全員が目的の座標に移動したら次の目的の座標をせってい。

        }else{
            //柵を置いて移動するを繰り返す。
            for(int i = 0; i < M; i++){
                if(i < 5){
                    gotox[i] = gohumanx[i][phase[i]];
                    gotoy[i] = gohumany[i][phase[i]];
                }
            }

            moveOrPutFence(moveorput, gotox, gotoy);
        }
        

        //動物の移動を受け取り，座標を変える
        animalMove();
    }
}
