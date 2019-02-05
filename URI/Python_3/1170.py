N = int(input())

for i in range(N):
    C = float(input())
    dias = 0
    comida_restante = C

    while comida_restante > 1:
        dias += 1
        comida_restante = C / 2 ** dias

    print(dias, "dias")
