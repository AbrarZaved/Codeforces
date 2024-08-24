a = int(input())
b = list(map(int,input().split()))
b.sort()
print(min(b[a-2]-b[0],b[a-1]-b[1]))