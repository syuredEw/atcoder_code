#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> front(N+1, 0), back(N+1, 0);

    for(int i = 0; i < Q; i++){
        int q;
        cin >> q;
        if(q == 1){
            int x, y;
            cin >> x >> y;
            back[x] = y;
            front[y] = x;
        }else if(q == 2){
            int x, y;
            cin >> x >> y;
            back[x] = 0;
            front[y] = 0;
        }else{
            int x;
            cin >> x;
            int m = 0;
            vector<long long> ans;
            while (front[x] != 0)
            {
                x = front[x];
            }            
            while (x != 0)
            {   
                ans.push_back(x);
                x = back[x];
                
            }
            m = ans.size();
            cout << m << " ";
            for(int i = 0; i < m; i++){
                cout << ans[i] << " "; 
            }
            cout << "\n";
        }
    }
}
