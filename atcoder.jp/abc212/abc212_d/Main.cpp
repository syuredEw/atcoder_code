#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q; cin >> Q;
    long long sum = 0, x;
    int num;
    priority_queue<long long , vector<long long >, greater<long long> > pq;
    for(int i = 0; i < Q; i++){
        cin >> num;
        
        if(num == 1){
            cin >> x;
            pq.push(x - sum);             
        }
        else if (num == 2)
        {
            int p; cin >> p;
            sum += p;
        }
        else if(num == 3){
            x = pq.top();
            cout << x + sum << endl;
            pq.pop();
        }   
    }
    return 0;
}