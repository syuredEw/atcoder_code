#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int num)
{
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool winTakahashi;

    for(int i = A; i <= B; i++){
        winTakahashi = false;
        for(int j = C; j <= D; j++){
            if(IsPrime(i + j)) winTakahashi = true;
        }
        if(!winTakahashi){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" <<endl;
}
