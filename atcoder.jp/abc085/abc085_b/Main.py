N = int(input())
d = [int(input()) for i in range(N)]

dict = {}
for i in range(N):
  dict[d[i]] = 1 

print(len(dict))