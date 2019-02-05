N = int(input())

for i in range(N):
    amostra = input()
    amostra2 = []
    for i in amostra:
        if i != '.':
            amostra2.append(i)
    diamantes = 0
    formou = 0
    c = 0
    tam = len(amostra2)
    while c < tam:
        k = amostra2[c]
        if k == '<':
            formou = 1
        else:
            if formou == 1:
                diamantes += 1
                del amostra2[c], amostra2[c - 1]
                c = -1
                tam = len(amostra2)
                formou = 0
        c += 1
    print(diamantes)
