t = int(input())

for _ in range(t):
    a = input()
    b=a[0]
    c=int(a[1])
    d=('a','b','c','d','e','f','g','h')
    for i in range(1,9):
        if i!=c and i<9:
            print(b,end='')
            print(i)
    for i in d:
        if i!=b:
            print(i,end='')
            print(c)    