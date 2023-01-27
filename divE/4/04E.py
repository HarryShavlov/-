Имеется калькулятор, который выполняет следующие операции:

Умножить число X на 2.
Умножить число X на 3.
Прибавить к числу X единицу.
Определите, какое наименьшее количество операций требуется, чтобы получить из числа 1 число N.

def f(n):
    if n == 1:
        print(0)
        print(1)
        return
    cache = [0] * (n + 1)
    sequence = [0] * (n + 1)
    for i in range(2, n + 1):
        v = cache[i - 1]
        sequence[i] = i - 1
        if i % 2 == 0:
            if v > cache[i // 2]:
                v = cache[i // 2]
                sequence[i] = i // 2
        if i % 3 == 0:
            if v > cache[i // 3]:
                v = cache[i // 3]
                sequence[i] = i // 3
        cache[i] = v + 1
    print(cache[-1])
    result = [n]
    while n != 1:
        n = sequence[n]
        result.append(n)
    print(*result[::-1])

f(int(input()))
