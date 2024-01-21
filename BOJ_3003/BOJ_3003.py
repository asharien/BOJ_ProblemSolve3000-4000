import sys
C = [1, 1, 2, 2, 2, 8]
X = list(map(int, sys.stdin.readline().split()))
ANS = [0 for i in range(6)]
for i in range(6): ANS[i] = C[i] - X[i]
print(*ANS)
