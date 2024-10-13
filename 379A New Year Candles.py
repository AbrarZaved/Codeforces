a, b = map(int, input().split())
result=a
while a>=b:
    result=result+int(a/b)
    a=int(a/b)+a%b

print(result)