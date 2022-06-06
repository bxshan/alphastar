cows = ["g", "h", "g", "h", "g"]


def photo(cows):
    N = len(cows)
    count = 0
    # Check for 3 in a row
    for i in range(len(cows) - 2):
        if cows[i] == cows[i + 1] == cows[i + 2]:
            print(cows[i], cows[i + 1], cows[i + 2])
            count += 1
            print(count)

    # Check for 4 - N in a row
    for consec_num in range(4, N + 1):
        a = 1

        if cows[i] == cows[i + k] for k in range(1, j - 1):
            print(cows[i], cows[i + n] for n in range(1, j - 1
            count += 1
            print(count)

photo(cows)
