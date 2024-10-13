t = int(input())

for _ in range(t):
    a, b = map(str, input().split())
    c = a[0] + b[1] + b[2]
    d = b[0] + a[1] + a[2]
    print(d, c)
