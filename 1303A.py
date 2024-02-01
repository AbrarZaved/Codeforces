def remove_zeros(number):

    number_str = str(number)
    number_str = number_str.lstrip('0')
    number_str = number_str.rstrip('0')
    
    if not number_str:
        number_str = '1'

    return int(number_str)

t = int(input())
for _ in range(t):
    input_number = input()
    result = remove_zeros(input_number)
    a = str(result)
    c=a.count("0")
    print(c)

