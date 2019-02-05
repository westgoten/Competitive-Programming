N = int(input())
pares = []
impares = []

for i in range(N):
    v = int(input())
    if v % 2 == 0:
        pares.append(v)
    else:
        impares.append(v)

pares.sort()
impares.sort(reverse = True)
pares.extend(impares)

for j in pares:
    print(j)
