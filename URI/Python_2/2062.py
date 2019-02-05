
n = input()

lista_ori = raw_input().split()
resultado = ''

for i in lista_ori:
    if len(i) == 3:
        if i[:2] == 'OB':
            resultado += 'OBI '
        elif i[:2] == 'UR':
            resultado += 'URI '
        else:
            resultado += i + ' '
    else:
        resultado += i + ' '

print resultado.strip()
