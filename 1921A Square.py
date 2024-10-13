coordinates = []

testcase = int(input())

for x in range(testcase):
    for i in range(4):
        input_str = input()
        x, y = map(int, input_str.split())  
        coordinates.append((x, y))
    
    point1 = coordinates[0]
    point2 = coordinates[1]
    point3 = coordinates[3]
    distance1 = pow((point1[0] - point2[0]), 2) + pow((point1[1] - point2[1]), 2)
    distance2 = pow((point1[0] - point3[0]), 2) + pow((point1[1] - point3[1]), 2)
    if distance1>distance2:
        print(distance2)
    else:
        print(distance1)
    coordinates.clear()

     
