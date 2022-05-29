N, L = [int(x) for x in input().split()]
order = [int(x) for x in input().split()]
cows = [int(x) for x in range(1, N + 1)]

i = 0
j = 0

while len(cows) != 1:
    i = (i + order[j] - 1) % len(cows)
    cows.pop(i)

    j = (j + 1) % L

print(cows[0])
