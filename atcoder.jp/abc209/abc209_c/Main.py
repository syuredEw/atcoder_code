#標準入力を代入
N = int(input())
C = [int(i) for i in input().split()]
C.sort()
len = 1
for n in range(N):
  len *= (C[n] - n)
  len %= 1000000007
print(len )