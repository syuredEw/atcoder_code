#include <bits/stdc++.h>
using namespace std;

int main(){
   int N;
   long long T;
   cin >> N >> T;
   vector<int> AB(N); 
   long long sum_b = 0, sum_a = 0;
   for(int i = 0; i < N; i++){
       int a, b;
       cin >> a >> b;
       AB[i] = a - b;
       sum_b += b;
       sum_a += a;
   }
   if(sum_b > T){
       cout << -1 << endl;
       return 0;
   }
   sort(AB.rbegin(), AB.rend());
   int ans = 0;
   for(int i = 0; i < N; i++){
       if(sum_a <= T) break;
       sum_a -=AB[i];
       ans++;
   }
   cout << ans << endl;

}
