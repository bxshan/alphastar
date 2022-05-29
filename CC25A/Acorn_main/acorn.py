N, X = [int(x) for x in input().split()]

acorns = []
for _ in range(N):
    acorn = int(input())
    acorns.append(acorn)
acorns.sort()

keep = []
curr_keep = []
for i in range(N):
    curr_keep.append(acorns[i])
    for j in range(i + 1, N):
        if acorns[j] - acorns[i] <= X:
            curr_keep.append(acorns[j])
    keep.append(curr_keep)
    curr_keep = []

max_len = 0
for l in keep:
    if len(l) > max_len:
        max_len = len(l)

print(max_len)
