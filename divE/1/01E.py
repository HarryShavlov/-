Квадратный корень

import sys


l = list(sys.stdin.read().splitlines())
res = []

for i in range(len(l)):
    if int(l[i]) >= 0 and i <= 2 ** 64:
        n = int(int(l[i]) ** 0.5)
        if n ** 2 > int(l[i]):
            n -= 1
    res.append(str(int(n)))

print("\n".join(res))
