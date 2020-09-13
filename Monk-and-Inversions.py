t = int(input())
for i in range(t):
    n = int(input())
    matrix = []
    for j in range(n):
        a = list(map(int,input().split()))
        matrix.append(a)
    count = 0
    for k in range(n):
        for l in range(n):
            for m in range(n):
                for o in range(n):
                    if(k<=m and l<=o):
                        if(matrix[k][l]>matrix[m][o]):
                            count = count + 1
    print(count)
