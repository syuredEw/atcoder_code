N = int(input())
A = list(map(int, input().split()))
count = 0
can = True
while(can):
    for i in range(len(A)):
        if(A[i] % 2 == 1):
            can = False
            break
        A[i] /= 2
    if(not can):
        break
    count += 1
print(count)
