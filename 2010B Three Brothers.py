a, b = map(int, input().split())

if a == 1 and b == 2 or a == 2 and b == 1:
    print(3)
elif a == 3 and b == 2 or a == 2 and b == 3:
    print(1)
elif a == 1 and b == 3 or a == 3 and b == 1:
    print(2)
