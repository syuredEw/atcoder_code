#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin >> N;
    int si = (int)N.size();
    if(si == 1){
        cout << "000"+N << endl;
    }    
    else if(si == 2){
        cout << "00"+N << endl;
    }
    else if(si == 3){
        cout << "0"+N << endl;
    }
    else{
        cout << N << endl;
    }

}