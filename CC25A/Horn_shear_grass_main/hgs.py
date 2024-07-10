N = int(input())
games = []
for _ in range(N):
    game = [int(x) for x in input().split()]
    games.append(game)

# 123, 132
wins_0 = 0
wins_1 = 0

for i in range(N):
    # 123
    if games[i][0] == 1 and games[i][1] == 2:
        wins_0 += 1
    elif games[i][0] == 2 and games[i][1] == 3:
        wins_0 += 1
    elif games[i][0] == 3 and games[i][1] == 1:
        wins_0 += 1

    # 132
    if games[i][0] == 1 and games[i][1] == 3:
        wins_1 += 1
    elif games[i][0] == 3 and games[i][1] == 2:
        wins_1 += 1
    elif games[i][0] == 2 and games[i][1] == 1:
        wins_1 += 1

print(max(wins_0, wins_1))
