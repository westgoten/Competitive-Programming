soma = 0
while 1:
    try:
        inp = input()
        if inp == 'caw caw':
            print(soma)
            soma = 0
        else:
            i = 0
            while i < 3:
                j = 2 - i
                if inp[i] == '*':
                    soma += 2 ** j
                i += 1
    except:
        break
