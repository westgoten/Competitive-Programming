C = int(input())

for i in range(C):
	turma = [int(x) for x in input().split()]
	N = turma[0]
	del turma[0]
	media = (sum(turma) / N)
	alunos_acima = 0
	for j in turma:
		if j > media:
			alunos_acima += 1
	print('%.3f%%' % ((alunos_acima / N) * 100))
