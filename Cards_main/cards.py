import math
N, T = [int(x) for x in input().split()]
cards = []
for _ in range(N):
    card = int(input())
    cards.append(card)

# num_max = 11 index_max = 0
#N = 4
#T = 5
#cards = [11, 2, 4, 9]

for i in range(T):
    num_max = max(cards)
    index_max = cards.index(num_max)
    cards.pop(index_max)
    print(index_max + 1)
    num_max_p = num_max
    for j in range(len(cards)):
        cards[j] += math.floor(num_max_p / len(cards))
        num_max -= math.floor(num_max_p / len(cards))

    for k in range(num_max):
        cards[k] += 1

    cards.insert(index_max, 0)
