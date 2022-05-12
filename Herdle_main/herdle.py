answer = []
guess = []

answer += list(input())
answer += list(input())
answer += list(input())
guess += list(input())
guess += list(input())
guess += list(input())

# answer = ["b","o","x","u","a","n","s","h","a"]
# guess = ["n","h","e","e","a","a","k","l","z"]
# print(answer, guess)


def herdle(answer, guess):
    green = 0
    for i in range(min(len(answer), len(guess))):
        if answer[i] == guess[i]:
            green += 1

    answer_dict = {}
    guess_dict = {}

    for a in answer:
        if a in answer_dict:
            answer_dict[a] += 1
        else:
            answer_dict[a] = 1

    for b in guess:
        if b in guess_dict:
            guess_dict[b] += 1
        else:
            guess_dict[b] = 1

    yellow = 0

    for i in answer_dict:
        if i in guess_dict.keys():
            yellow += min(answer_dict[i], guess_dict[i])

    yellow -= green
    print(green)
    print(yellow)


herdle(answer, guess)
