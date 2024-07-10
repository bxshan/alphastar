def compare(first, second) -> bool:
    first_win = 0
    for i in first:
        for j in second:
            if i > j:
                first_win += 1
            elif i == j:
                first_win += 0.5
    if first_win > 8:
        return True
    else:
        return False


def explore(A, B) -> bool:
    A_win = compare(A, B)

    for i in range(11):
        for j in range(11):
            for k in range(11):
                for l in range(11):
                    C = [i, j, k, l]
                    if A_win:
                        if compare(B, C) and compare(C, A):
                            return True
                    elif not A_win:
                        if compare(A, C) and compare(C, B):
                            return True
    return False


number_cases = int(input())

for i in range(number_cases):
    line = [int(x) for x in input().split()]
    A = line[0:4]
    B = line[4:8]

    final = explore(A, B)

    if final:
        print("yes")
    else:
        print("no")
