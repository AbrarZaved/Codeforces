def print_array(A):
    for i in range(len(A)):
        print(A[i], end=" ")

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    for i in range(n):
        details = input().split()
        b = int(details[0])
        s = details[1]
        
        for j in range(b):
            if s[j] == 'D':
                a[i] += 1
                if a[i] == 10:
                    a[i] = 0
                elif a[i] == -1:
                    a[i] = 9
            elif s[j] == 'U':
                a[i] -= 1
                if a[i] == -1:
                    a[i] = 9
                elif a[i] == 10:
                    a[i] = 0

    print_array(a)
    print()
    
    
   