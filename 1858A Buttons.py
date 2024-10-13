t = int(input())

for _ in range(t):
    a,b,c=map(int,input().split())
    div = c / 2
    rem = c % 2
    a = a + div + rem
    b = b + div
    if a > b:
        print("First")
    else:
        print("Second")