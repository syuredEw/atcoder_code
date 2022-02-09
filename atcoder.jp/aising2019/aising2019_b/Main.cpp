#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int A, B;
    //cin >> A >> B;
    cin >> N >> A >> B;
    vector<int> P(N);
    queue<int> aika, aizy, bizyo;
    for(int i = 0; i < N; i++){
        int p;
        cin >> p;
        if(p <= A){
            aika.push(p);
        }else if(p > A && p <= B){
            aizy.push(p);
        }else{
            bizyo.push(p);
        }
    }

    cout << min({aika.size(), aizy.size(), bizyo.size()}) << endl;

}
