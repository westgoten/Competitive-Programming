n = int(input())

for i in range(n):
    a, b = input().split()
    if b not in a:
        print('nao encaixa')
    else:
        pos = a.rindex(b)
        if a[pos:] == b:
            print('encaixa')
        else:
            print('nao encaixa')
