def sum(a):
    total = 0
    for i in a:
        total += abs(i)

    return total


t = int(input())

for _ in range(t):
    a = int(input())
    b = list(map(int, input().split()))
    hehe = sum(b)
    print(hehe)
