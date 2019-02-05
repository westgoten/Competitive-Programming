a, b, c, d = [int(x) for x in input().split()]

if (a + b) > c and (a + c) > b and (b + c) > a:
    res = 'S'
elif (a + b) > d and (a + d) > b and (b + d) > a:
    res = 'S'
elif (b + c) > d and (b + d) > c and (c + d) > b:
    res = 'S'
elif (a + c) > d and (a + d) > c and (c + d) > a:
    res = 'S'
else:
    res = 'N'

print(res)
