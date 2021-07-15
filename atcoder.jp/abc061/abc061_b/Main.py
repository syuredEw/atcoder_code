N, M  = map(int, input().split())
ab = [map(int, input().split()) for _ in range(M)]
a, b = [list(i) for i in zip(*ab)]

route = {}
for i in range(1, N + 1):
  route[i] = 0
for i in range(M):
  route[a[i]] += 1
  route[b[i]] += 1

for i in range(1, N + 1):
  print(route[i])