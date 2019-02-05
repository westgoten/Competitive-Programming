n = int(input())

melhor = ('Minimum note not reached', 8)

for i in range(n):
    m, nota = input().split()
    nota = float(nota)
    if nota >= melhor[1]:
        melhor = (m, nota)
print(melhor[0])
