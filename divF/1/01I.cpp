В математике функция sign(x) (знак числа) определена так:
sign(x) = 1, если x > 0,
sign(x) = -1, если x < 0,
sign(x) = 0, если x = 0.
Для данного числа x выведите значение sign(x).
  
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >>x;
    if (x == 0)
        cout<<0;
    else 
        if (x>0)
            cout<<1;
        else  cout<<-1;
    return 0;
}
