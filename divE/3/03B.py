По данному числу N выведите все строки длины N из нулей и единиц в обратном лексикографическом порядке.

from itertools import product
a=[]
for it in product('01', repeat=int(input())):
    a.append(it)
a.sort(reverse=True)
for i in range(len(a)):
    print(''.join(a[i]), sep = "\n")
