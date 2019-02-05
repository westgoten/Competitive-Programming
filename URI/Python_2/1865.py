N = input()

for i in xrange(N):
    nome, forca = raw_input().split()
    if nome == 'Thor':
        print 'Y'
    else:
        print 'N'
