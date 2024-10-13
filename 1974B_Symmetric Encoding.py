for _ in range(int(input())):
    a = int(input())
    s = input()
    b = sorted(list(set(s)))
    c = b[::-1]
    for i in s:
        d = b.index(i)
        print(c[d], end="")
    print()
