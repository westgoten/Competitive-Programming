while 1:
    try:
        H, E = [int(x) for x in input().split()]
        resultado = abs(H - E)
        print(resultado)
    except:
        break
