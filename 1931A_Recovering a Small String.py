def solve():
    n, sz = int(input()), 26
    mins, cur = "zzz", ""
    for i in range(sz):
        for j in range(sz):
            for k in range(sz):
                if i + j + k + 3 == n:
                    cur += chr(i + ord('a'))
                    cur += chr(j + ord('a'))
                    cur += chr(k + ord('a'))
                    mins = min(cur, mins)
    print(mins)


t = int(input())
for _ in range(t):
    solve()

        