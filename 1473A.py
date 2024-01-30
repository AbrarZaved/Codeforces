def small_check(a, n, d):
    b = []
    c = []
    for i in range(n):
        if a[i] > d:
            b.append(a[i])
        else:
            c.append(a[i])

    return b,c

t = int(input())

for _ in range(t):
    n, d = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()
    a,b = list(small_check(arr,n,d))
    count = 0
    if not a:
        print("YES")
    else:
        for i in range(len(b)-1):
            if b[i]+b[i+1]<=d:
                count+=1
        
        if count != 0:
            print("YES")
        else:
            print("NO")
    