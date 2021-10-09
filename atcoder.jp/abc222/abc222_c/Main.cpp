#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    char A[2*N][M];
    vector<pair<int, int>> pa(2*N); //勝利数，勝利番号

    for(int i = 0; i < 2 *N; i++){
        pa[i] = make_pair(0, i);
        for(int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < M; i++){
        sort(pa.begin(), pa.end());
        for(int j = 0; j < N; j++){
            int n1 = pa[2*j].second, n2 = pa[2*j + 1].second;

            if((A[n1][i] == 'G' && A[n2][i] == 'C') || (A[n1][i] == 'C' && A[n2][i] == 'P') || (A[n1][i] == 'P' && A[n2][i] == 'G')){
                pa[2*j].first--;
            }
            
            else if((A[n1][i] == 'C' && A[n2][i] == 'G') || (A[n1][i] == 'P' && A[n2][i] == 'C') || (A[n1][i] == 'G' && A[n2][i] == 'P')){
                pa[2*j+1].first--;
            }
        }
        //cout << pa[0].first << " ," <<pa[0].second << endl;
    }
    sort(pa.begin(), pa.end());
    for(int i = 0; i < 2 * N; i++){
        cout << pa[i].second+1<<endl;
    }
    
}