t = int(input())

for _ in range(t):
    
    n = int(input())
    count = 0
    one = 0
    for i in range(n):
        row = input()
        
        if row.count('1') == 1:
            one = 1
            count = 0
            
        elif one == 0:
            count=1

            
    if count == 1:
        print('SQUARE')
    else:
        print('TRIANGLE')    
    