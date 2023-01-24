Дано натуральное число. Найдите число десятков в его десятичной записи.
  
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << a/10%10 << std::endl;
    return 0;
}
