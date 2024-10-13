t = int(input())

for _ in range(t):
    c = input()
    l = len(c)
    n = list(map(int, str(c)))
    if n[l-1] %2==0:
        print(0)
    elif n[0] %2==0:
        print(1)
    else:    
        for i in range (l):
            if n[i]%2==0 and i>0:
                print(2)
                a=0
                break
            else:
                a=1
        if a==1:
            print(-1)
            
       


        