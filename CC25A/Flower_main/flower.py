T, N = [int(x) for x in input().split()]

flowers = [0]
for _ in range(N):
    flower = int(input())
    flowers.append(flower)


def abs_sort(a):
    return abs(a)


flowers.sort(key=abs_sort)

print(flowers)

curr_t = 0
out = 0

for i in range(1, N):
    print("===", flowers[i], flowers[i - 1], curr_t)
    curr_t += abs(flowers[i] - flowers[i - 1])

    if curr_t >= T:
        break

    out += 1

print(out)
