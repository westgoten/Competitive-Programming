
par = []
impar = []

p = 0
im = 0

for i in xrange(15):
    n = input()
    if n % 2 == 0:
        par.append(n)
        p += 1
    else:
        impar.append(n)
        im += 1
    if p == 5:
        p = 0
        x = 0
        while x < 5:
            print 'par[%i] = %i' % (x, par[x])
            x += 1
        par = []
    elif im == 5:
        im = 0
        x = 0
        while x < 5:
            print 'impar[%i] = %i' %  (x, impar[x])
            x += 1
        impar = []

x = 0
for i in impar:
    print 'impar[%i] = %i' % (x, impar[x])
    x += 1

x = 0
for i in par:
    print 'par[%i] = %i' % (x, par[x])
    x += 1
