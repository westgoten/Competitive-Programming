o = raw_input()
soma = 0
conta = 0
linhas = 5
resto = 0

for i in xrange(144):
    num = input()
    if i % 13 == 1 and linhas > 0:
        soma += num
        conta += 1
        linhas -= 1
        resto = 9 - (2 * (i / 13))
    elif resto > 0:
        soma += num
        conta += 1
        resto -= 1

if o == 'S':
    print soma
else:
    print '%.1f' % (soma / conta)
