#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    bool okC = false;

    for(int i = 0; i < S.size(); i++){
        if(S[i] == 'C') okC = true;
        else if(S[i] == 'F' && okC){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
