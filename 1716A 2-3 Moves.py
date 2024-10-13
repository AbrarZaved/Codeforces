t = int(input())

for _ in range(t):
    n = int(input())
    if n==4 or n==1:
        print(2)
    elif n%3==0:
        print(int(n/3))
    elif n%3==2:
        print(int(n/3)+1)
    else:
        print(int((n-1)/3)+1)