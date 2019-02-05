while 1:
    try:
        L = int(input())
        V = [int(x) for x in input().split()]
        V.sort()
        lesma_v = V[-1]
        if lesma_v < 10:
            print(1)
        elif 10 <= lesma_v < 20:
            print(2)
        elif lesma_v >= 20:
            print(3)
    except:
        break
