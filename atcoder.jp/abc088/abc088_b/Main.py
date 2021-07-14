N = int(input())
A = list(map(int, input().split()))
A.sort(reverse = True)
alice = 0
bob = 0
for i in range(N):
  if(i % 2 == 1):
    bob += A[i]
  else:
    alice += A[i]
print(alice - bob)