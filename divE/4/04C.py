Простая последовательность

def a(n):
    if n in (0, 1):
        return 1
    else:
        if n % 2:
            return a((n - 1) / 2) - a((n - 1) / 2 - 1)
        else:
            return a(n / 2) + a(n / 2 - 1)


n = int(input())
print(a(n))
