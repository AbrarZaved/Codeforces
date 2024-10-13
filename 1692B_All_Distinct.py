t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(set(map(int,input().split())))
    if (n-len(arr)) % 2 == 0:
        print(len(arr))
    else:
        print(len(arr)-1)