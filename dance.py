import math

N = int(input())
coord = []

for line in range(N):
    coord.append([int(x) for x in input().split()])


def dis(x1, y1, x2, y2) -> float:
    return math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)


def dance(N, coord):
    output = []
    count = 0

    for i in range(N):
        for j in range(i + 1, N):
            current_dis = dis(coord[i][0], coord[i][1],
                              coord[j][0], coord[j][1])
            if current_dis > count:
                output = [i + 1, j + 1]
                count = current_dis
    print(output[0], output[1])


dance(N, coord)
