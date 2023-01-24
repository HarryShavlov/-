Последовательность состоит из различных натуральных чисел и завершается числом 0. 
Определите значение второго по величине элемента в этой последовательности.
Числа, следующие за числом 0, считывать не нужно.
 
#include <iostream>
int main()
{
    int digit, max = 0, max2;
    while (std::cin >> digit && digit != 0)
    {
        if (digit > max) 
        {
            max2 = max;
            max = digit;
        }
        else if (digit > max2) 
            max2 = digit;
    }
    std::cout << max2;
    return 0;
}
