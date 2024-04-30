t= int(input())

my_dict ={
    "S":1,
    "M":2,
    "L":3,
}

for _ in range(t):
    a,b=map(str,input().split())
    d = len(a)
    e = len(b)
    last = a[d-1]
    second_last = b[e-1]
    if last=="L" and second_last=="L":
        c = a.count("X")
        f = b.count("X")
        if c==f:
            print("=")
        elif c>f:
            print(">")
        else:
            print("<")
    elif last=="S" and second_last=="S":
        c = a.count("X")
        f = b.count("X")
        if c==f:
            print("=")
        elif c>f:
            print("<")
        else:
            print(">")
    elif last==second_last:
        print("=")
    elif my_dict[last]>my_dict[second_last]:
        print(">")
    else:
        print("<")


