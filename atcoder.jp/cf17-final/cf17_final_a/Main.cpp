#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string ans = "AKIHABARA";
    vector<int> bits{0, 4, 6, 8};

    for(int bit = 0; bit < (1 << 4); bit++){
        string T = "";
        int i = 0;
        vector<bool> yes(4, false);
        for(int i = 0; i < 4; i++){
            if(bit & (1 << i)) yes[i] = true;
        }    
        int j = 0;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == 'A'){
                if(yes[j]){
                    j++;
                    continue;
                }
                T += 'A';
                j++;
            }else{
                T += ans[i];
            }
        }
        //cout << T << endl;
        if(T == S){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}