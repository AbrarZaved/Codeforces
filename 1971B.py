import random 
t = int(input())

for _ in range(t):
    a = input()
    b = random.sample(a,len(a))
    
    d = "".join(b)
    if a==d:
        print("NO")
    else:
        print("YES")
        print(d)
  
    