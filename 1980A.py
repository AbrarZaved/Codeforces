<<<<<<< HEAD
t = int(input())

for _ in range(t):
    a,b = map(int, input().split())
    s = input()
    ans = 0
    for i in range(ord('A'),ord('H')):
        ans += max(0, b-s.count(chr(i)))
=======
t = int(input())

for _ in range(t):
    a,b = map(int, input().split())
    s = input()
    ans = 0
    for i in range(ord('A'),ord('H')):
        ans += max(0, b-s.count(chr(i)))
>>>>>>> a1173defe16d2ead6cc7b1642d086ba68eeae209
    print(ans)