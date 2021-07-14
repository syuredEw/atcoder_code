N, K = map(int, input().split())
count = 0
while(N > 0):
  a =N % K
  N = N // K
  count += 1
  
print(count)