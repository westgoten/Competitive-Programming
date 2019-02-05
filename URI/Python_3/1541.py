valores = [int(x) for x in input().split()]
tamanho = len(valores)

while tamanho == 3:
    A, B, C = valores
    C = C / 100
    area_casa = A * B
    area_terreno = area_casa / C
    lado_terreno = int(area_terreno**0.5)

    print(lado_terreno)

    valores = [int(x) for x in input().split()]
    tamanho = len(valores)
