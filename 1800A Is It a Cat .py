def solve():
    n = int(input()) 
    s = input() 
    s = s.lower() 
    result = []
    for i in range(n):
        if i == 0 or s[i] != s[i - 1]:
            result.append(s[i])
    result = "".join(result)
    print("YES" if result == "meow" else "NO")



t = int(input())
for _ in range(t):
    solve()
