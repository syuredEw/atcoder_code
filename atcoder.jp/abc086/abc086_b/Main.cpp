#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string c = a + b;
    long double num = atoi(c.c_str());
    if(sqrt(num) == (int)sqrt(num)) cout << "Yes" << endl;
    else cout << "No" << endl;

}
