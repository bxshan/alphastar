A, B, C = [int(x) for x in input().split()]
doodle = []
for _ in range(A):
    figure = list(input())
    doodle.append(figure)


def draw(doodle):
    new_doodle = []
    for figure in doodle:
        current = []
        for i in range(B):
            current.append(figure[i] * C)

        for _ in range(C):
            new_doodle.append(current)

    for figure in new_doodle:
        print(''.join(figure))


draw(doodle)
