tomadas = [int(x) for x in input().split()]
melhor = 0

for i in tomadas:
    if i != 3:
        melhor += 1
    else:
        break

if melhor != 4:
    del tomadas[melhor]
    print(sum(tomadas))
else:
    melhor = 0
    if 4 in tomadas:
        melhor = tomadas.index(4)
    elif 5 in tomadas:
        melhor = tomadas.index(5)
    elif 6 in tomadas:
        melhor = tomadas.index(6)
    else:
        melhor = 0

    if tomadas[melhor] == 2:
        print(5)
    else:
        tomadas[melhor] = tomadas[melhor] - 3
        print(sum(tomadas))
