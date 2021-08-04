N = int(input())
a = list(map(int, input().split()))
cnt = [0] * (10**5+2)

for i in range(N): #i番目のaの整数がある場所に加算する
   cnt[a[i]] += 1
ans = 0
for i in range(1, 100000+1):
     cont = cnt[i-1] + cnt[i] + cnt[i+1]
     ans = max(ans, cont)
print(ans)
