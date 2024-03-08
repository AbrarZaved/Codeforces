t = int(input())

for _ in range(t):
    n = int(input())
    a = set()
    i = 1
    while i * i <= n:
        a.add(i * i)
        i += 1
    i = 1
    while i * i * i <= n:
        a.add(i * i * i)
        i += 1
    print(len(a))
