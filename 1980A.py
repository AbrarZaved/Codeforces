t = int(input())

for _ in range(t):
    a,b = map(int, input().split())
    s = input()
    ans = 0
    for i in range(ord('A'),ord('H')):
        ans += max(0, b-s.count(chr(i)))
    print(ans)