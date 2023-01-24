По данному числу N выведите все строки длины N из нулей и единиц в лексикографическом порядке.
Данную задачу нужно решить используя рекурсивную функцию. Нельзя использовать bin() и битовые сдвиги.
 
#include <bits/stdc++.h>

using namespace std;

void func( string str, int len )
{
    if( !len )
    {
        cout << str << endl;
        return;
    }
    func( str + '0', len - 1 );
    func( str + '1', len - 1 );
}
 
int main()
{
    int n;

    cin >> n;
 
    func( "", n );
    return 0;
}
