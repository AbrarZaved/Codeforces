def solve():
    n, s, m = map(int, input().split())

    segments = [[0, 0], [m, m]]

    for _ in range(n):
        segments.append(list(map(int, input().split())))


    segments.sort()
    for i in range(1, len(segments)):
        previous_end = segments[i - 1][1]
        current_start = segments[i][0]

        if current_start - previous_end >= s:
            print("YES")
            return

    print("NO")


for _ in range(int(input())):
    solve()
