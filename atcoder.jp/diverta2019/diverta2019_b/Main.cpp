#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R, G, B, N;
    cin >> R >> G >> B >> N;
    int ans = 0;
    for(int r = 0; r <= N / R; r++){
        for(int g = 0; g <= N / G; g++){
            int sumRG = r * R + g * G;
             if (N - sumRG >= 0 && (N - sumRG) % B == 0) ans++; 
        }
    }
    cout << ans << endl;
}
