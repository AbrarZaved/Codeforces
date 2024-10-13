t = int(input())

for _ in range(t):
    n, m, k = map(int, input().split())
    a = [x for x in map(int, input().split()) if x < k]
    b = [x for x in map(int, input().split()) if x < k]
    total = len(a) * len(b)
    count = 0
    for i in a:
        for j in b:
            if i + j > k:
                count += 1
    total = total - count
    print(total)
