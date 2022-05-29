import math
N, K = [int(x) for x in input().split()]
horses = []
for _ in range(K):
    horse = [int(x) for x in input().split()]
    horses.append(horse)


for i in range(K):
    output = 0
    unit_length = horses[i][0] * horses[i][1]
    unit_time = horses[i][1] + horses[i][2]

    temp_n = N
    print(unit_length, "l", unit_time, "t", temp_n, "n")
    while temp_n > unit_length:
        temp_n -= unit_length
        output += unit_time

    print(output, "o", temp_n, "n")
    print(temp_n / horses[i][0], "p")
    output += int(math.ceil(temp_n / horses[i][0]))

    print(output)
