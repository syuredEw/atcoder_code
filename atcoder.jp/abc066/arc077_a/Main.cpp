#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    deque<long long> dq;
    for(int i = 0; i < N; i++){
        long long a;
        cin >> a;
        if(i % 2 == 0){
            dq.push_back(a);
        }else{
            dq.push_front(a);
        }
    }

    for(int i = 0; i < N; i++){
        if(N % 2 == 0){
        cout << dq.front() << " ";
        dq.pop_front();
        }else{
            cout << dq.back() << " ";
            dq.pop_back();
        }
    }
    cout << "\n";
}
