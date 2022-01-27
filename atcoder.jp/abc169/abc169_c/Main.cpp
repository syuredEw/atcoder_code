#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B1, B2;
    scanf("%lld %lld.%lld", &A, &B1, &B2);

    printf("%lld\n", A * (B1 * 100 + B2)/ 100);
}
