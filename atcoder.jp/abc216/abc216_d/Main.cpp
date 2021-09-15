#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    queue<int> que; //筒の宣言
    vector<queue<int>> A(M); //
    vector<vector<int>> mem(N);
    for(int i = 0; i < M; i++){
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int a; cin >> a;
            A[i].push(a-1); //筒に数を代入
        }
        mem[A[i].front()].push_back(i);// 筒の最初の数字の番号に追加
    }
    for(int i = 0; i < N; i++){
        if(mem[i].size() == 2){
            que.push(i);
        }
    }

    while(!que.empty()){
        int now = que.front();//筒の最初の値を代入
        que.pop(); //筒の最初の値を取り出す
        for(auto p: mem[now]){
            A[p].pop(); //最初の筒の値を削除
            if(!A[p].empty()){
                mem[A[p].front()].push_back(p);
                if(mem[A[p].front()].size() == 2){
                    que.push(A[p].front());
                }
            }
        }
    }
    for(auto p: A){
        if(!p.empty()){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}