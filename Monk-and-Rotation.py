t = int(input())
for i in range(t):
    n,k = input().split()
    n = int(n)
    k = int(k)
    arr = list(map(int,input().split()))
    k = k%n
    print(*(arr[n-k:]+arr[:n-k]))