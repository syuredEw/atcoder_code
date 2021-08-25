#include <iostream>
using namespace std;

int main(){
    int N, i;
    cin >> N;

    for(i = 1; i <= N; i++){
        if(int(i * 1.08) == N){
            cout << i << endl;
            return 0;
        }
    }
    printf(":(");
    return 0;
}
