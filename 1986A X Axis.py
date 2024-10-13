for _ in range(int(input())):
    b = list(map(int, input().split()))
    b.sort()
    total = abs(b[1] - b[0]) + (b[2] - b[1])
    print(total)
