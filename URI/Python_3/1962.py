n = int(input())

for i in range(n):
    t = int(input())

    result = 2015 - t
    if result > 0:
        print(result, 'D.C.')
    else:
        print(abs(result - 1), 'A.C.')
