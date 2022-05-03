import math
N, M = [int(x) for x in input().split()]


def draw(N, M):
    count = 0
    output = 0
    while N % 2 == 1 and M % 2 == 1:
        output += 4 ** count
        N = (N - 1) / 2
        M = (M - 1) / 2
        count += 1
    print(output)


draw(N, M)
