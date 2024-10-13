def solve():
    n = int(input())
    for a in range(3, n):
        c = (n - a) // 2
        b = n - a - c
        if c > 1 and b + 1 < a:
            c -= 1
            b += 1
        if a > b > c:
            print(b, a, c)
            return

testcase=int(input())
for i in range(testcase):
    solve()