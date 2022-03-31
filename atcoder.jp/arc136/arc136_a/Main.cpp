#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    string ns = "";

    for(int i = 0; i < N; i++){
        if(S[i] != 'A'){
            ns += S[i];
        }else{
            ns += "BB";
        }
    }
    //cout << ns <<endl;
    S = ns;
    ns = "";
    bool ok = false;
    int n = S.size();
    for(int i = 0; i < n; i++){
        if(S[i] == 'B' && S[i+1] == 'B'){
            ns += 'A';
            i++;
        }else{
            ns += S[i];
        }
        //cout << ns << endl;
    }

    //if(S[n-1] != 'B' && S[n-2] != 'B') ns += S[n-1];
    cout << ns << endl;
}