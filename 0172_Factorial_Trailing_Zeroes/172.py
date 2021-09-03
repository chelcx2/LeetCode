def trailingZeroes(n: int) -> int:
    num_of_two = 0
    num_of_five = 0
    for i in range(1, n + 1):
        if i % 2 != 0 and i % 5 != 0:
            continue
        # fac_result = prime_factorization(i)
        # num_of_two += fac_result.count(2)
        # num_of_five += fac_result.count(5)
        res = two_five_cnt(i)
        num_of_two += res[0]
        num_of_five += res[1]
        # print(i, num_of_two, num_of_five)
    return min(num_of_two, num_of_five)

# def prime_factorization(n):
#     divisor = 2
#     factors = []
#     while divisor * divisor <= n:
#         if n % divisor == 0:
#             factors.append(divisor)
#             n //= divisor
#         else:
#             divisor += 1
#     if n > 1:
#         factors.append(n)
#     return factors



def two_five_cnt(n):
    t, f = 0, 0
    while n % 2 == 0:
        n //= 2
        t += 1
    while n % 5 == 0:
        n //= 5 
        f += 1
    return t, f

print(trailingZeroes(3))
print(trailingZeroes(5))
print(trailingZeroes(10))
print(trailingZeroes(30))