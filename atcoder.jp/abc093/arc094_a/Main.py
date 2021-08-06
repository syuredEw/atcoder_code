number  = list(map(int, input().split()))
number.sort()
A = number[0] # 1
B = number[1] # 5
C = number[2] # 7

ct = C - B
A += ct
gp = (C - A) // 2
if (C - A) % 2 == 0:
    ct += gp
else:
    ct += gp + 2
print(ct)
