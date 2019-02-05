n = int(input())
bc = mc = 0
nomes = []

for i in range(n):
    s, n = input().split()
    nomes.append(n)
    if s == '+':
        bc += 1
    else:
        mc += 1

nomes.sort()

for i in nomes:
    print(i)

print('Se comportaram: %.i | Nao se comportaram: %.i' % (bc, mc))
