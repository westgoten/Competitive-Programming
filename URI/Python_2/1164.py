
n = input()

for i in xrange(n):
    x = input()
    s = 0
    for y in xrange(1, x):
        if x % y == 0:
            s += y
    if s == x:
        print x, 'eh perfeito'
    else:
        print x, 'nao eh perfeito'
