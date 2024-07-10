L, C, N = [int(x) for x in input().split()]


def charms(L, C, N):
    output = []
    charms = []
    for _ in range(C):
        charm = [int(x) for x in input().split()]
        charms.append(charm)

    for charm in charms:
        out = abs(charm[1] - N) + charm[0]
        output.append(out)
        print(out)


charms(L, C, N)
