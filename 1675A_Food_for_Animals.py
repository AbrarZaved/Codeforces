t = int(input())

for _ in range(t):
    a,b,c,x,y = map(int,input().split())
        
    if max(0,x-a)+max(0,y-b)<=c:
        print("YES")
    else:
        print("NO")
    
