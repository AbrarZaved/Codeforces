t = int(input())

for _ in range(t):
    n = input()
    a = int(n[:len(n)//2])
    if a>12:
        b = a-12
        if b<10:
            print(f'0{b}{n[len(n)//2:]} PM')
        else:
            print(f'{b}{n[len(n)//2:]} PM')
    elif a==12:
        print(f'{a}{n[len(n)//2:]} PM')
    elif a==0:
        print(f'12{n[len(n)//2:]} AM')
    else:
        if a<10:
            print(f'0{a}{n[len(n)//2:]} AM')
        else:
            print(f'{a}{n[len(n)//2:]} AM')