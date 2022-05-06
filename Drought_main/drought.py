def feed(cows):
    same = False
    count = 0
    while not same:
        for i in range(len(cows) - 1):
            if cows[i] > cows[i + 1]:
                if i == 0:
                    print("-1")
                    return
                else:
                    delta = cows[i] - cows[i + 1]
                    cows[i] -= delta
                    cows[i - 1] -= delta
                    if cows[i] < 0 or cows[i - 1] < 0:
                        print("-1")
                        return
                    count += 2 * delta

            if cows[i] < cows[i + 1]:
                if i == len(cows) - 2:
                    print("-1")
                    return
                else:
                    delta = cows[i + 1] - cows[i]
                    cows[i + 1] -= delta
                    cows[i + 2] -= delta
                    if cows[i + 1] < 0 or cows[i + 2] < 0:
                        print("-1")
                        return
                    count += 2 * delta
        same = True
        for j in range(len(cows) - 1):
            if cows[j] != cows[j + 1]:
                same = False
    print(count)


#cows = [0, 1, 0]

number_cases = int(input())
for i in range(number_cases):
    number_cows = int(input())
    cows = [int(x) for x in input().split()]
    assert(len(cows) == number_cows)
    #print(number_cases, cows)
    feed(cows)
