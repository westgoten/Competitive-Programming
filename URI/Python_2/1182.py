
c = input()
t = raw_input()
s = i = 0

for x in xrange(144):
    n = input()
    i += 1
    if i > 12:
        i = 1
    if i % 13 == c + 1:
        s += n

if t == 'S':
    print '%.1f' % s
else:
    print '%.1f' % (s / 12)
