N = int(input())
A = list(map(int, input().split()))
A.sort()
total = 0
for i in range(0, 2 * N, 2):
  total += A[N + i]
print(total)