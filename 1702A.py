t = int(input())
for i in range(t):
    number = input()
    length=len(number)-1
    real = int(number)
    result = real - pow(10,length)
    print(result)