t = int(input())

for _ in range(t):
    a = int(input())
    total = 0
    while a // 4 != 0:
        total += a // 4
        a = a % 4
    while a!=0:
        total += a // 2
        a = a % 2

    print(total)