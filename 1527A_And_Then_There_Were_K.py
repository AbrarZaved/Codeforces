t = int(input())
for _ in range(t):
    n = int(input())
    last = 0
    for i in range(30):
        if (n >> i) & 1 == 1:
            last = i
    print((1 << last) - 1)
