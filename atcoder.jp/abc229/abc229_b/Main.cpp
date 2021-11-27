#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long A, B;
    cin >> A >> B;
    unsigned long long C = A + B;
    string cntA, cntB, cntC;
    cntA = to_string(A);
    cntB = to_string(B);
    cntC = to_string(C);
    bool ok = true;
    if(cntC.size() > max(cntA.size(), cntB.size())) ok = false;
    else{
    for(int i = 0; i < cntA.size(); i++){
        if(cntC[i] < cntB[i]) ok = false;

    }
    }
    if(ok){
        cout << "Easy" << endl;
    }else{
        cout << "Hard" << endl;
    }
    
}
