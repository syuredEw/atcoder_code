#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1, s2, s3, t1, t2, t3;
    cin >> s1 >> s2 >> s3;
    cin >> t1 >> t2 >> t3;

    if(s1 == t2 && s2 == t1 || s1 == t3 && s3 == t1 || s2 == t3 && s3 == t2){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}