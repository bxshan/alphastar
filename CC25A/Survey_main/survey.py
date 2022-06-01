N, NQ, P = [int(x) for x in input().split()]

students = []
for _ in range(N):
    student = [int(x) for x in input().split()]
    students.append(student)

questions = []
for _ in range(P):
    question = [int(x) for x in input().split()]
    questions.append(question)

out = 0
curr = 0
for i in range(N):
    curr = 0
    for j in range(P):
        if students[i][questions[j][0] - 1] == questions[j][1]:
            curr += 1
    if curr == P:
        out += 1


print(out)
