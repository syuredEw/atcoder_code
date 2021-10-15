#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int cnt_a = 0, cnt_b = 0;
    string S;
    cin >> S;
    for(int i = 0; i < N; i++){
        if(S[i] == 'c') cout << "No" <<endl;
        else if(S[i] == 'a' && cnt_a < A + B){
            cout << "Yes" << endl;
            cnt_a++;
        }
        else if(S[i] == 'b' && cnt_b < B && cnt_a < A + B){
            cout << "Yes" << endl;
            cnt_b++;
            cnt_a++;
        }
        else cout << "No" <<endl;
    }
}