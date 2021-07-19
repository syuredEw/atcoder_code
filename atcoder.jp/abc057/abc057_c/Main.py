import math
N = int(input())

def hantei(a, b):
  count = 0
  while(a > 0 or b > 0):
    a = a // 10
    b = b // 10
    count += 1
  return count
#main 
ran = int(math.sqrt(N)) + 1
min_i = 100000
for i in range(1, ran):
  b = i
  if N % i == 0:
    a = N // b
    func = hantei(a, b)
    if(min_i > func):
      min_i = func
print(min_i)
    