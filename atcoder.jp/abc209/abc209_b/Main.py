N, X = map(int, input().split())
A = [int(i) for i in input().split()]
sum=0
for n in range(N):
  if n % 2 !=0:
    sum+= A[n]-1
  else:
    sum+= A[n]
if X >= sum:
  print("Yes")
else:
  print("No")