H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]

for y in range(H):
    for x in range(W): 
        c = 0
        if S[y][x] =='.':
            for dx in range(-1, 2):
                for dy in range(-1, 2):
                     xx = x + dx
                     yy = y + dy
                     if(0 <= xx and xx < W and 0 <= yy and yy < H):
                         if(S[yy][xx] == '#'):
                             c += 1
            S[y][x] = str(c)

for i in range(H):
    for j in range(W):
        print(S[i][j], end="")
    print()
