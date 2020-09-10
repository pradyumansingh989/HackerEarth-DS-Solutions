n,k= map(int,input().split())
from collections import Counter
arr = list(map(int,input().split()))
d = Counter(arr)
count = 0
for i in range(n):
    temp = k - arr[i]
    if(d[temp]):
        if(arr[i]==temp and d[temp]==1):
            continue
        print("YES")
        count = 1
        break
if(count==0):
    print("NO")