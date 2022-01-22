#include <bits/stdc++.h>
using namespace std;

int main()
{
    long N;
    cin >> N;

    vector<long> a(N);
    int nmax = -1;
    bool ok = true;

    for(int i = 0; i < N; i++){
        cin >> a[i];
        if(a[i] > nmax) nmax = a[i];
    }

    int first = a[0], second = -1, third = -1, miru = 1;
    for(int i = 1; i < N; i++){
        if(miru == 1){
            if(a[i] != first){
                second = a[i];
                miru++;
            }
        }
        else if(miru == 2){
            if(a[i] != second){
                third = a[i];
                miru++;
            }
        }
        if(a[i] < a[i-1]){
            ok = false;
        }
    }

    //cout << nmax << endl;
    if(ok){
        for(int i = 0; i < N; i++){
            if(a[i] != nmax) cout << a[i] << " ";
        }
        cout << endl;
        return 0;
    }
    if(second == -1){
        cout << " " << endl;
        return 0;
    }

    int del = 0;
    if(third == -1){
        if(first > second) del = first;
        else del = second;
    }
    else{
        if(first < second){
            if(second < third){
                for(int i = 0; i < N-1; i++){
                    if(a[i] > a[i+1]){
                        del = a[i];
                        break;
                    }
                }
                if(del == 0) del = nmax;
            }else{
                del = second;
            }
        }else{
            del = first;
        }
    }
    //cout << del << endl;
    for(int i = 0; i < N; i++){
        if(del != a[i]) cout << a[i] << " ";
    }
    cout << endl;
}
