N = int(input())

while N != 0:
	partidas = [int(x) for x in input().split()]
	mary = 0
	john = 0
	for i in partidas:
		if i == 0:
			mary += 1
		elif i == 1:
			john += 1
	print('Mary won %.i times and John won %.i times' % (mary, john))
	N = int(input())
