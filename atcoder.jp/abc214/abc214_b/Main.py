S, T = map(int, input().split())
count = 0
for i in range(0, S + 1):
    for j in range(0, S - i + 1):
        for k in range(0, S - i - j + 1):
            if(i * j * k <= T):
                count += 1
print(count)