def main():
    n = int(input())
    for _ in range(n):
        r, b, d = map(int, input().split())
        print("YES" if min(r, b) * (d + 1) >= max(r, b) else "NO")


main()