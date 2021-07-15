N, Y = map(int, input().split())
res10000, res5000, res1000 = -1, -1, -1
for i in range(N + 1):
  for j in range(N - i + 1):
    if(Y == i * 10000 + j * 5000 + (N - j - i) * 1000):
      res10000 = i
      res5000 = j
      res1000 = N - j - i
print(res10000, res5000, res1000)