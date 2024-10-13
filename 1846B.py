for _ in range(int(input())):
    a = input()
    b = input()
    c = input()
    if (
        (a[0] == "X" and b[0] == "X" and c[0] == "X")
        or (a[1] == "X" and b[1] == "X" and c[1] == "X")
        or (a[2] == "X" and b[2] == "X" and c[2] == "X")
        or (a[0] == "X" and a[1] == "X" and a[2] == "X")
        or (b[0] == "X" and b[1] == "X" and b[2] == "X")
        or (c[0] == "X" and c[1] == "X" and c[2] == "X")
        or (a[0] == "X" and b[1] == "X" and c[2] == "X")
        or (a[2] == "X" and b[1] == "X" and c[0] == "X")
    ):
        print("X")
    elif (
        (a[0] == "O" and b[0] == "O" and c[0] == "O")
        or (a[1] == "O" and b[1] == "O" and c[1] == "O")
        or (a[2] == "O" and b[2] == "O" and c[2] == "O")
        or (a[0] == "O" and a[1] == "O" and a[2] == "O")
        or (b[0] == "O" and b[1] == "O" and b[2] == "O")
        or (c[0] == "O" and c[1] == "O" and c[2] == "O")
        or (a[0] == "O" and b[1] == "O" and c[2] == "O")
        or (a[2] == "O" and b[1] == "O" and c[0] == "O")
    ):
        print("O")
    elif (
        (a[0] == "+" and b[0] == "+" and c[0] == "+")
        or (a[1] == "+" and b[1] == "+" and c[1] == "+")
        or (a[2] == "+" and b[2] == "+" and c[2] == "+")
        or (a[0] == "+" and a[1] == "+" and a[2] == "+")
        or (b[0] == "+" and b[1] == "+" and b[2] == "+")
        or (c[0] == "+" and c[1] == "+" and c[2] == "+")
        or (a[0] == "+" and b[1] == "+" and c[2] == "+")
        or (a[2] == "+" and b[1] == "+" and c[0] == "+")
    ):
        print("+")
    else:
        print("DRAW")
