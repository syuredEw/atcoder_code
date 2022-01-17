#include <bits/stdc++.h>
using namespace std;

struct UnionFind
{
    vector<int> par;
    UnionFind(int N) : par(N)
    { // 最初はすべてが根であるとして初期化
        for (int i = 0; i < N; i++)
        {
            par[i] = i;
        }
    }

    int root(int x)
    { //データxが属する木の根を再帰で得る : root(x) = {xの木の根}
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y)
    {                     // xとyの木を併合
        int rx = root(x); // xの根をrx
        int ry = root(y); // yの根をry
        if (rx == ry)
            return;   // xとyの根が同じ(=同じ木にある) ときはそのまま
        par[rx] = ry; // xとyの根が同じではない(=同じ木にない): xの根rxをyの根ryにつける
    }

    bool same(int x, int y)
    { // 2つのデータをx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> p(N);
    UnionFind tree(N);
    for(int i = 0; i < N; i++) cin >> p[i];

    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;
        tree.unite(x-1, y-1);
    }
    
    int ans = 0;
    for(int i = 0; i < N; i++){
        if(tree.same(i, p[i]-1)) ans++; 
    }
    cout << ans << endl;
    return 0;
}