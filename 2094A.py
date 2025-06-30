t = int(input())
for _ in range(t):
    str = input()
    ans = str[0]
    for i in range(len(str) - 1):
        if str[i] == " ":
            ans += str[i + 1]
    print(ans)
