p, j1, j2, r, a = [int(x) for x in input().split()]
total = j1 + j2
jogada = (r, a)

if (r, a) == (1, 0) or (r, a) == (0, 1):
    res = 'Jogador 1 ganha!'
elif (r, a) == (1, 1):
    res = 'Jogador 2 ganha!'
else:
    if p == 1:
        if total % 2 == 0:
            res = 'Jogador 1 ganha!'
        else:
            res = 'Jogador 2 ganha!'
    else:
        if total % 2 != 0:
            res = 'Jogador 1 ganha!'
        else:
            res = 'Jogador 2 ganha!'

print(res)
