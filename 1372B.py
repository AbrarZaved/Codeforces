def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a // gcd(a, b)) * b

t = int(input())
for _ in range(t):
    n = int(input())
    min_lcm = n
    a, b = 1, n-1
    for i in range(1, n//2 + 1):
        current_lcm = lcm(i, n-i)
        if current_lcm < min_lcm:
            min_lcm = current_lcm
            a, b = i, n-i

    print(a, b)

