Y, X = [int(x) for x in input().split()]
grid = []
for _ in range(Y):
    row = [x for x in list(input())]
    grid.append(row)


clue = 0
output = []
for i in range(Y):
    for j in range(X):

        found = False
        if j < X - 2:
            if j == 0:
                if grid[i][j] == "." and grid[i][j + 1] == "." and grid[i][j + 2] == ".":
                    found = True
            else:
                if grid[i][j - 1] == "#" and grid[i][j] == "." and grid[i][j + 1] == "." and grid[i][j + 2] == ".":
                    found = True

        if i < Y - 2:
            if i == 0:
                if grid[i][j] == "." and grid[i + 1][j] == "." and grid[i + 2][j] == ".":
                    found = True
            else:
                if grid[i - 1][j] == "#" and grid[i][j] == "." and grid[i + 1][j] == "." and grid[i + 2][j] == ".":
                    found = True

        if found:
            clue += 1
            temp = [i, j]
            output.append(temp)

print(clue)
for item in output:
    print(item[0] + 1, item[1] + 1)
