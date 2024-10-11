def check(a):
    if a % 2 == 0:
        return 1
    else:
        return 0


for _ in range(int(input())):
    a, b = map(int, input().split())
    total = a * 1 + b * 2
    if a==0 and check(b) or check(a) and b==0:
        print("YES")
    elif a>=2 and b>=1 and check(total):
        print("YES")
    else:
        print("NO")
