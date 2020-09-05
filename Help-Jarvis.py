t = int(input())
for i in range(t):   
    l = input()
    li = []
    for i in l:
        li.append(int(i))
    mi = min(li)
    ma = max(li)
    arr = []
    for i in range(mi,ma+1):
        arr.append(i)
    if(sorted(li)==sorted(arr)):
        print('YES')
    else:
        print('NO')