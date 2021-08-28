#include <iostream>
#include <string>
using namespace std;

int N, cnt;
string S;

int main(){
    cin >> N >> S;
    for(int i = 0; i < 1000; i++){
        int a[3] = {i / 100, (i /10) % 10 , i %10}, process = 0;
        for(int j = 0; j < N; j++){
            if(process <= 2 && a[process] == (int)(S[j] - '0')) process++;
        }
        if(process == 3) cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}
