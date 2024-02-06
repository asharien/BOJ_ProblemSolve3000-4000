import sys
X, Y, F = [], [], []
for i in range(3):
    x, y  = input().split()
    X.append(int(x))
    Y.append(int(y))

if(X[0] == X[1]):
    if(X[0] != X[2]): F.append(X[2])
elif(X[1] == X[2]): F.append(X[0])
elif(X[0] == X[2]): F.append(X[1])

if(Y[0] == Y[1]):
    if(Y[0] != Y[2]): F.append(Y[2])
elif(Y[1] == Y[2]): F.append(Y[0])
elif(Y[2] == Y[0]): F.append(Y[1])
print(*F)

