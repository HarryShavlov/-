Мячик на лесенке

def ball(N):
    a, b, c = 1, 2, 4
    if N < 4:
        return [0, a, b, c][N]
    i = 3
    while i < N:
        a, b, c = b, c, a + b + c
        i += 1
    return c
print(ball(int(input())))
