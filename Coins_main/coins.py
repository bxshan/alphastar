N = int(input())

coins = []
for _ in range(N):
    row = [int(x) for x in list(input())]
    coins.append(row)

counter = 0
for i in range(N - 1, -1, -1):
    for j in range(N - 1, -1, -1):
        if coins[i][j] == 1:
            for n in range(i + 1):
                for m in range(j + 1):
                    if coins[n][m] == 0:
                        coins[n][m] = 1
                    else:
                        coins[n][m] = 0
            counter += 1
print(counter)
