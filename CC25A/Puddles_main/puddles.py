R, C = [int(x) for x in input().split()]

puddles = []
for _ in range(R):
    row = list(input())
    row.append("-")
    puddles.append(row)
puddles.append("-" * C)

x_puddles, y_puddles, tot_puddles = 0, 0, 0

for i in range(R):
    for j in range(C):
        # X
        if puddles[i][j] == "#" and puddles[i][j + 1] == "#":
            x_puddles += 1

        # Y
        if puddles[i][j] == "#" and puddles[i + 1][j] == "#":
            y_puddles += 1

        # Total
        if puddles[i][j] == "#":
            tot_puddles += 1

output = tot_puddles - (x_puddles + y_puddles)
print(output)
