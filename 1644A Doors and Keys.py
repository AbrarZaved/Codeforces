t = int(input())

for _ in range(t):
    n = input()
    my_dict = {}
    for i in range(len(n)):
        my_dict[n[i]] = i
    if my_dict['b'] < my_dict['B'] and my_dict['r'] < my_dict['R'] and my_dict['g'] < my_dict['G']:
        print('YES')
    else:
        print('NO')

        