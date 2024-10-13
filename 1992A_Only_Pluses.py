def product(a):
    total = 1
    for i in a:
        total = total * i
    return total


def increasing(a):
    for i in range(5):
        b = min(a)
        index = a.index(b)
        a[index] += 1
    return a


t = int(input())
for _ in range(t):
    a = list(map(int, input().split()))
    a = increasing(a)
    total = product(a)
    print(total)
