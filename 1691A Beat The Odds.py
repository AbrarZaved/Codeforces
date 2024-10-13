def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        num_odd = sum(1 for x in a if x % 2 == 1)
        print(min(num_odd, n - num_odd))
        

main()
        