import math
N = int(input())

max_val = math.ceil(math.sqrt(N)) + 1
output = 0
for a in range(max_val):
    for b in range(max_val):
        for c in range(max_val):
            if (a ** 2 + b ** 2 + c ** 2) <= N:
                d = math.sqrt(N - (a ** 2 + b ** 2 + c ** 2))
                if d == int(d):
                    output += 1

print(output)
