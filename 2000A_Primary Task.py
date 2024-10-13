for _ in range(int(input())):
    s = input()
    if len(s) < 3:
        print("NO")
        continue
    a = int(s[:2])
    b = int(s[2:])
    if a == 10 and b > 1 and int(s[2]) != 0:
        print("YES")
    else:
        print("NO")
