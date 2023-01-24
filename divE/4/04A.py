Последняя цифра числа Фибоначчи

def fib(n):
    mlist = [1,1]
    for i in range(2, n + 1):
        mlist.append(mlist[i - 1] + mlist[i - 2])
    print(str(mlist[n])[-1])

n = int(input())
fib(n)
