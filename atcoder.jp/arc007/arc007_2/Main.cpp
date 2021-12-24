#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> disk(N);
    for(int i = 0; i < N; i++) disk[i] = i+1;
    int cd = 0;
    for(int m = 0; m < M; m++){
        int popcd;
        cin >> popcd;
        if(popcd == cd) continue;
        else{
            auto itr = find(disk.begin(), disk.end(), popcd);
            int index = itr - disk.begin();
            swap(cd, disk[index]);
            cd = popcd;
        }
    }

    for(int i = 0; i < N; i++){
        cout << disk[i] << "\n";
    }
}
