#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[4]; cin >> a;
    int h = a[0] - '0', i = a[1] - '0', j = a[2] - '0', k = a[3] - '0';
    if(h - i - j- k == 7) cout << h << "-" << i <<"-"<<j<<"-"<<k <<"=7"<< endl;
    else if(h - i - j+ k == 7) cout << h << "-" << i <<"-"<<j<<"+"<<k <<"=7"<< endl;
    else if(h - i + j- k == 7) cout << h << "-" << i <<"+"<<j<<"-"<<k <<"=7"<< endl;
    else if(h - i + j+ k == 7) cout << h << "-" << i <<"+"<<j<<"+"<<k <<"=7"<< endl;
    else if(h + i - j- k == 7) cout << h << "+" << i <<"-"<<j<<"-"<<k <<"=7"<< endl;
    else if(h + i - j+ k == 7) cout << h << "+" << i <<"-"<<j<<"+"<<k <<"=7"<< endl;
    else if(h + i + j- k == 7) cout << h << "+" << i <<"+"<<j<<"-"<<k <<"=7"<< endl;
    else if(h + i + j+ k == 7) cout << h << "+" << i <<"+"<<j<<"+"<<k <<"=7"<< endl;
}