t = int(input())

for _ in range(t):
    n, f, k = map(int, input().split())
    a = list(map(int, input().split()))
    favorite = a[f - 1]
    a.sort(reverse=True)
    tinku = a[:k]
    jhinku = a[k:]
    if favorite in tinku and favorite in jhinku:
        print("MAYBE")
    elif favorite in tinku and favorite not in jhinku:
        print("YES")
    elif favorite not in tinku and favorite in jhinku:
        print("NO")
