#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N;
   cin >> N;
   vector<int> A(N);
   for(int i = 0; i < N; i++){
       cin >> A[i];
   }
   vector<int> ans;
   if(N == 1){
       cout << max(A[0], 360 - A[0]);
       return 0;
   }
   ans.push_back(0);
   int ad = 0;
   for(int i = 0; i < N; i++){
       ad += A[i];
       ad %= 360;
       ans.push_back(ad);
   }
   sort(ans.begin(), ans.end());
   int cnt = 0;
   for(int i = 0; i < N; i++){
       if(cnt < ans[i+1] - ans[i]) cnt = ans[i+1] - ans[i];
   }

    cout <<cnt << endl;
}
