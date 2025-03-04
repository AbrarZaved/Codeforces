def solve():
    n = int(input())
    res = 0
    pw = 1
    while pw <= n:
        for d in range(1, 10):
            if pw * d <= n:
                res += 1
        pw = pw * 10 + 1
    print(res)


def main():
    tests = int(input())
    for _ in range(tests):
        solve()


if __name__ == "__main__":
    main()
