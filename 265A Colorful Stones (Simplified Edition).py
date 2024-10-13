a = input()
b = input()
count = 1
j = 0

for i in range(len(b)):
    if b[i] == a[j]:
        count += 1
        j += 1

print(count)
