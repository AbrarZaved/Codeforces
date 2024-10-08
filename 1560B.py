t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    n = 2 * abs(a - b)
    if a > n or b > n or c > n:
        print(-1)
    else:
        d = n // 2 + c
        while d > n:
            d -= n
        print(d)
