from math import ceil

for _ in range(int(input())):
    x, y = map(int, input().split())
    a = ceil(y / 2)
    b = (a * 15) - (y * 4)
    d = 0
    if x > b:
        c = x - b
        d = ceil(c / 15)
    print(a + d)
