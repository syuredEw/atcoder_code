#include <iostream>
using namespace std;

int X;
int main(){
    cin >> X;
    int x, x1, x2, sum;
    bool jud = false;
    x = X % 100;
    x1 = X / 100;
    for(int i = 0; 5 * i < 100 ; i++){
        for(int j = 0; 4 * j < 100 - 5 * i; j++){
            for(int k = 0; 3 * k < 100 - 5 * i - 4 * j; k++){
                for(int l = 0; 2 * l < 100 - 5 * i - 4 * j - 3 * k; l++){
                    for(int m = 0; m < 100 - 5 * i - 4 * j - 3 * k - 2 * l; m++){
                        x2 = i * 5 + j * 4 + k * 3 + l * 2 + m * 1;
                        sum = i + j + k + l + m;
                        if((sum <= x1) && (x2 == x)) jud = true;
                    }
                }
            }
        }
    }

    if(jud == true){
        cout << "1" <<endl;
        return 0;
    }
    cout << "0" << endl;
    return 0;
}