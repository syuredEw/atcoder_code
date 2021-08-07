N = int(input())
A = list(map(int, input().split()))
count_ki = 0
count_gu = 0
for i in range(N):
    if(A[i] % 2 == 0): #偶数を加算
        count_gu += 1
    else:
        count_ki += 1 #基数を加算

if count_ki % 2 == 1:
    print("NO")
else:
    print("YES")
