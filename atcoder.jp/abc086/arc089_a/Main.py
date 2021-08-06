N = int(input())

t_list = [0] * (10**5+1)
x_list = [0] * (10**5+1)
y_list  = [0] * (10**5+1)


for i in range(1, N+1):
    t, x, y = map(int, input().split())
    t_list[i] = t
    x_list[i] = x
    y_list[i] = y


#print(N, x_list[0], y_list[0], t_list[0]) 
can = True
for i in range(N):
    dt = t_list[i+1] - t_list[i]
    dist = abs(x_list[i+1] - x_list[i]) + abs(y_list[i+1] - y_list[i])
    if dt < dist:
        can = False
    if dist % 2 != dt % 2:
        can = False
if can:
    print("Yes")
else:
    print("No")
