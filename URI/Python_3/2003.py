while 1:
    try:
        H = input()
        h, m = int(H[0]), int(H[2] + H[3])
        atraso_h = h - 7
        if atraso_h < 0:
            atraso_t = 0
        else:
            atraso_t = atraso_h * 60 + m
        print('Atraso maximo:', atraso_t)
    except:
        break
