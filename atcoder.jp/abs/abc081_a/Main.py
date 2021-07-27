s = input()
list_s = list(s)
count = 0
for i in range(len(list_s)):
    if list_s[i] == '1':
        count += 1
print(count)