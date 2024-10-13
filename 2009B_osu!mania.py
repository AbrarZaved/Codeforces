def index(a):
    for i in range(len(a)):
        if a[i] == "#":
            return i + 1


def printing(a):
    for i in range(len(a)):
        print(a[i], end=" ")
    print()


t = int(input())

for _ in range(t):
    n = int(input())
    c = []
    for i in range(n):
        a = input()
        c.insert(0, index(a))
    printing(c)
