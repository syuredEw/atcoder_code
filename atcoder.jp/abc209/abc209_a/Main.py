#入力の受け取り
a, b =map(int, input().split())

if(b - a >= 0):
  print(b - a + 1)
else:
  print("0")
  