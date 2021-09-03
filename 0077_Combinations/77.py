import itertools
def combine(n, k):
    return list(itertools.combinations(range(1, n+1), k))
print(combine(n = 4, k = 2))
print(combine(n = 1, k = 1))