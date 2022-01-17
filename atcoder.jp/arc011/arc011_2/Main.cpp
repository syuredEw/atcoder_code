#include <bits/stdc++.h>
//using namespace std;

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::string> w(N);
    for(int i = 0; i < N; i++){
        std::cin >> w[i];
    }

    std::string ans = "";
    for(int i = 0; i < N; i++){
        std::string S = "";
        std::transform(w[i].begin(), w[i].end(), w[i].begin(), tolower);
        for(int j = 0; j < w[i].size(); j++){
            char a = w[i][j];
            if(a == 'b' || a == 'c') S += '1';
            else if(a == 'd' || a == 'w') S += '2';
            else if(a == 't' || a == 'j') S += '3';
            else if(a == 'f' || a == 'q') S += '4';
            else if(a == 'l' || a == 'v') S += '5';
            else if(a == 's' || a == 'x') S += '6';
            else if(a == 'p' || a == 'm') S += '7';
            else if(a == 'k' || a == 'h') S += '8';
            else if(a == 'n' || a == 'g') S += '9';
            else if(a == 'z' || a == 'r') S += '0';
        }
        if(ans == "") ans += S;
        else if(S != "") ans += (" " + S);
    }
    std::cout << ans << std::endl;
}
