import math

N = int(input())
rooms = []
for _ in range(N):
    room = int(input())
    rooms.append(room)

min_output = math.inf

for i in range(N):
    index, count, output = i, 0, 0
    for _ in range(N):
        output += rooms[index] * count

        index = (index + 1) % N
        count += 1

    if output < min_output:
        min_output = output

print(min_output)
