N, X = map(int, input().split())
m = [int(input()) for i in range(N)]
X -= sum(m)
index = X // min(m)

print(len(m) + index)