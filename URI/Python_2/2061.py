N, M = [int(x) for x in raw_input().split()]

for i in xrange(M):
	act = raw_input()
	if act == 'fechou':
		N += 1
	elif act == 'clicou':
		N -= 1

if N < 0:
	N = 0

print N
