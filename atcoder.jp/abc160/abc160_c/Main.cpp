#include <bits/stdc++.h>
using namespace std;

int main(){
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    int ans = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int longest = 0, longet_dis = -1;
    for(int i = 0; i < N; i++){
        int dis;
        if(N-1 == i){
            dis = A[0] + (K - A[N-1]);
        }else{
            dis = A[i+1] - A[i];
        }
        ans += dis;
        if(longet_dis < dis){
            longest = i;
            longet_dis = dis;
        }
    }
    cout << ans - longet_dis <<endl;
}
