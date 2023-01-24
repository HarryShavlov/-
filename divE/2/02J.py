Рассмотрим последовательность, состоящую из круглых, квадратных и фигурных скобок. 
Программа дожна определить, является ли данная скобочная последовательность правильной.

def skob(_str):
    a = []
    for char in _str:
        if char in ["(", "{", "["]:
            a.append(char)
        else:
            if not a:
                return False
            c = a.pop()
            if c == '(':
                if char != ")":
                    return False
            elif c == '{':
                if char != "}":
                    return False
            elif c == '[':
                if char != "]":
                    return False
    if a:
        return False
    return True

a = input()
if skob(a):
    print("yes")
else:
    print("no")
