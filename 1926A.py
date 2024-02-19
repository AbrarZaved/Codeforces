t = int(input())

for _ in range(t):
    n = input()
    
    if n.count('A') > n.count('B'):
        print('A')
    else:
        print('B')