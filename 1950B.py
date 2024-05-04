t = int(input())

for _ in range(t):
    n = int(input())
    s, t = "", ""
    for p in range(n):
        s += ".." if p % 2 else "##"
        t += "##" if p % 2 else ".."
    
    for row in range(2 * n):
        print(s if row % 4 < 2 else t)  
