p, a = [int(x) for x in input().split()]
l = p // 2
custo1 = 0
custo2 = 0

i = 0
while i < p:
    x = int(input())
    if i < l:
        custo1 += x
    else:
        custo2 += x
    i += 1

custo1 = custo1 * l
custo2 = custo2 * (p - l)

print(custo1 + custo2)
