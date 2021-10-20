#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[4][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    for(int a = 0; a < N; a++){
        int b;
        cin >> b;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(A[i][j] == b) A[i][j] = 0;
            }
        } 
    }

    bool ok = false;
    for(int i = 0; i < 3; i++){
        int flag = 0;
        for(int j = 0; j < 3; j++){
            if(A[i][j] == 0) flag++;
            //cout << A[i][j] << " ";
        }
        //cout << endl;
        if(flag == 3) ok = true;
    }

    for(int i = 0; i < 3; i++){
        int flag = 0;
        for(int j = 0; j < 3; j++){
            if(A[j][i] == 0) flag++;
        }
        if(flag == 3) ok = true;
    }

    if(A[0][0] == 0 && A[1][1] == 0 && A[2][2] == 0) ok = true;
    if(A[0][2] == 0 && A[1][1] == 0 && A[2][0] == 0) ok = true;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

}
