#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    deque<int> dq;
    dq.push_back(N);

    for(int i = N-1; i >= 0; i--){
        if(S[i] == 'L'){
            dq.push_back(i);
        }else{
            dq.push_front(i);
        }
    }
    //cout << dq.size() << endl;
    while (!dq.empty())
    {
        int ans = dq.front();
        dq.pop_front();
        cout<< ans << " ";
    }
    cout << endl;
}
