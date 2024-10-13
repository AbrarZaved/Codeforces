t = int(input())

for _ in range(t):
    n,a,b=map(int,input().split())
    ans = n*a
    if(b<2*a):
        ans = (n//2)*b+(n%2)*a
    print(ans)
    
