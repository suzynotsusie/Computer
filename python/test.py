import math

def find_digit(k, p):
    n = int((math.sqrt(1 + 8 * k * (k - 1) / 2) + 1) / 2)
    p1 = p + n * (n - 1) // 2
    m = (k - n * (n - 1) // 2) + p
    if m > n:
        m -= 1
    idx = m - (n - 1) * (n - 2) // 2 - 1
    return str(m)[idx]

t = int(input())
for i in range(t):
    k, p = map(int, input().split())
    print(find_digit(k, p))
