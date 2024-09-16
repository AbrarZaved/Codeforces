def swap_letters(s, pos1, pos2):
    s_list = list(s)
    s_list[pos1], s_list[pos2] = s_list[pos2], s_list[pos1]
    return "".join(s_list)


def finding(s):
    a = []
    for j in range(len(s) - 1):
        if s[j] == "B" and s[j + 1] == "G":
            a.append(j)
            a.append(j + 1)
    return a


n, t = map(int, input().split())
s = input()

for i in range(t):
    b = finding(s)
    for j in range(0, len(b), 2):
        if j + 1 < len(b):
            s = swap_letters(s, b[j], b[j + 1])
        else:
            break

print(s)
