t = int(input())

for _ in range(t):
    n,m,x= map(int, input().split())
    div = int(x/n)
    rem = x%n
    if rem!=0:
        result = div + 1 + (m*(rem-1))
    else:
        result = n*m - (m-div)
    
    print(result)
        
            
        