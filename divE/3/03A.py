По данному числу N выведите все строки длины N из нулей и единиц в лексикографическом порядке.
Данную задачу нужно решить используя рекурсивную функцию. Нельзя использовать bin() и битовые сдвиги.

from itertools import product
print(*(''.join(it) for it in product('01', repeat=int(input()))), sep='\n')
