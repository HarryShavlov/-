Требуется подсчитать количество последовательностей длины N , состоящих из 0 и 1, в которых никакие две единицы не стоят рядом.


def f(m):

    stack = [0, 2, 3]
    for i in range(3, m + 1):
        not_one = stack[i - 2] + stack[i - 1]
        stack.append(not_one)
    return stack[m]


n = int(input())
print(f(n))
