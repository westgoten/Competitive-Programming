while 1:
	try:
		v, t = [int(x) for x in input().split()]
		if t == 0 or v == 0:
			print(0)
		else:
			print(int(((v / t) * (t * 2) ** 2) / 2))
	except:
		break
