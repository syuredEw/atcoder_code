N, L = map(int, input().split())
S = list(input() for i in range(N))
S.sort(reverse = False)
print("".join(S))