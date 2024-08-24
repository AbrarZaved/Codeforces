def count_suneet_wins(a1, a2, b1, b2):
    suneet_cards = [a1, a2]
    slavic_cards = [b1, b2]

    wins = 0

    # Possible orderings for Suneet: [(a1, a2), (a2, a1)]
    suneet_orderings = [(a1, a2), (a2, a1)]
    # Possible orderings for Slavic: [(b1, b2), (b2, b1)]
    slavic_orderings = [(b1, b2), (b2, b1)]

    for s_order in suneet_orderings:
        for v_order in slavic_orderings:
            suneet_rounds_won = 0
            if s_order[0] > v_order[0]:
                suneet_rounds_won += 1
            if s_order[1] > v_order[1]:
                suneet_rounds_won += 1
            if (
                suneet_rounds_won > 1
            ):  # Suneet needs to win more than 1 round to win the game
                wins += 1

    return wins


# Reading input
t = int(input())
results = []

for _ in range(t):
    a1, a2, b1, b2 = map(int, input().split())
    results.append(count_suneet_wins(a1, a2, b1, b2))

# Printing results
for result in results:
    print(result)
