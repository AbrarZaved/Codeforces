def solve():
    s = input()
    ok = False
    for i in range(1, len(s)):
        if s[i] != s[0]:
            new_s = list(s)
            new_s[i], new_s[0] = new_s[0], new_s[i]
            s = "".join(new_s)
            ok = True
            break
    if not ok:
        print("NO")
        return
    print("YES")
    print(s)

def main():
    tt = int(input())
    for i in range(1, tt+1):
        solve()

main()
