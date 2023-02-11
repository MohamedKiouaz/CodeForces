tests = int(input())

for _ in range(tests):
    n = int(input())
    flavors = input().split(' ')
    flavors = [int(k) for k in flavors]
    flavors.sort()
    total = 0
    maxx = max(flavors)
    one_coins = 0
    two_coins = 0
    three_coins = 0
    while total < maxx:
        if one_coins >= 2 and two_coins >= 2:
            one_coins -= 1
            two_coins -= 1
            three_coins += 1
        elif two_coins >= 4:
            two_coins -= 3
            three_coins += 2
        elif one_coins >= 3:
            one_coins -= 2
            two_coins += 1
        elif one_coins >= 4:
            one_coins -= 3
            three_coins += 1

        if total + 1 in flavors:
            one_coins += 1
            total += 1
            continue
        if total + 2 in flavors:
            two_coins += 1
            total += 2
            continue
        three_coins += 1
        total += 3

    print(one_coins + two_coins + three_coins)