Дек с защитой от ошибок


command=['push_front','push_back', 'pop_front','pop_back', 'back', 'size', 'clear', 'exit', 'front']
a=[]
b='0'

while True:
    while b[0] not in command:
        s = input('')
        b = s.split()
    if b[0]=='push_front':
        a.insert(0,b[1])
        print('ok')
    elif b[0] == 'push_back':
        a.append(b[1])
        print('ok')
    elif b[0]=='size':
        print(len(a))
    elif b[0]=='clear':
        a.clear()
        print('ok')
    elif b[0]=='exit': print('bye'); break
    if b[0]=='pop_back' and len(a)>0:
        print(a.pop())
    elif b[0]=='pop_back':
        print('error')
    if b[0]=='pop_front' and len(a)>0:
        print(a.pop(0))
    elif b[0]=='pop_front':
        print('error')
    if b[0]=='back' and len(a)>0:
        print(a[-1])
    elif b[0]=='back':
        print('error')
    if b[0] == 'front' and len(a)>0:
        print(a[0])
    elif b[0]=='front':
        print('error')
    b[0]='0'
