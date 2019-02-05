o = raw_input()
soma = 0
conta = 0
resto = 0

for i in xrange(144):
    num = input()
    if i % 11 == 1 and i != 1 and i != 12:
        soma += num
        conta += 1
        resto = i / 11 - 2
    elif resto > 0:
        soma += num
        conta += 1
        resto -= 1

if o == 'S':
    print soma
else:
    print '%.1f' % (soma / conta)
