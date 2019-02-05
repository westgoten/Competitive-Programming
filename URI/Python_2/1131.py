
vit_I = vit_G = empates = grenais = 0
i = 1

while i == 1:
    gols_I, gols_G = [int(x) for x in raw_input().split()]

    grenais += 1

    if gols_I > gols_G:
        vit_I += 1
    elif gols_I < gols_G:
        vit_G += 1
    else:
        empates += 1

    i = input('Novo grenal (1-sim 2-nao)\n')

print grenais, 'grenais'
print 'Inter:' + str(vit_I)
print 'Gremio:' + str(vit_G)
print 'Empates:' + str(empates)

if vit_I > vit_G:
    print 'Inter venceu mais'
elif vit_I < vit_G:
    print 'Gremio venceu mais'
else:
    print 'Nao houve vencedor'
