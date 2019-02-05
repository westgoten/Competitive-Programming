n = int(input())

mult = {2 :0, 3 : 0, 4 : 0, 5 : 0}

l = [int(x) for x in input().split()]

for i in l:
    for j in mult:
        if i % j == 0:
            mult[j] += 1

for j in mult:
    print('%.i Multiplo(s) de %.i' % (mult[j], j))
