X = int(input())
X_list = []
count = 0
while(count < 4):
    x = X  % 10
    X = X // 10
    X_list.insert(0, x)
    count += 1
#print(X_list)
count = 0
#print(len(X_list))
if(X_list[0] == X_list[1] and X_list[0] == X_list[2] and X_list[0] == X_list[3]):
    print("Weak")
else:
    for i in range(len(X_list) - 1):
        if(X_list[i + 1] - X_list[i] % 10 == 1 or X_list[i + 1] - X_list[i] % 10 == -9):
            count += 1
    if(count == 3):
        print("Weak")
    else:
        print("Strong")
