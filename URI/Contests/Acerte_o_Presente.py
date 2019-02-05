n = int(input())
lista = {}

for i in range(n):
    entr = input().split()
    nom, present = entr[0], entr[1:]
    lista[nom] = present

while 1:
    try:
        nom, present = input().split()
        if present in lista[nom]:
            print('Uhul! Seu amigo secreto vai adorar o/')
        else:
            print('Tente Novamente!')
    except:
        break
