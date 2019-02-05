
t = input()

for i in xrange(t):
    pa, pb, g1, g2 = raw_input().split()
    pa = int(pa); pb = int(pb); g1 = float(g1); g2 = float(g2)
    anos = 0
    while 1:
        anos += 1
        pa += int(pa * g1 / 100.0)
        pb += int(pb * g2 / 100.0)
        if pa > pb:
            break
        elif anos > 100:
            break
    if anos <= 100:
        print anos, 'anos.'
    else:
        print 'Mais de 1 seculo.'
