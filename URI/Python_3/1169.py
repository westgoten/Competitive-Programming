n = int(input())

for i in range(n):
    x = int(input())
    graos = 2 ** x
    massa_g = graos / 12
    massa_kg = massa_g / 1000
    print('%.i kg' % massa_kg)
