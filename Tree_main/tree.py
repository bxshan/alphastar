N, B = [int(x) for x in input().split()]

acorns = []
for _ in range(N):
    acorn = int(input())
    acorns.append(acorn)

acorns.sort(reverse=True)
output = 0

for i in range(N):
    if B > 0:
        B -= acorns[i]
        output += 1

print(output)
