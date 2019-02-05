qt = int(input())

for i in range(qt):
    player_1, option_1, player_2, option_2 = input().split()
    players_and_options = {option_1: player_1, option_2: player_2}

    n, m = [int(x) for x in input().split()]
    if (n + m) % 2 == 0:
        print(players_and_options['PAR'])
    else:
        print(players_and_options['IMPAR'])
