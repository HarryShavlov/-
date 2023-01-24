Вводится последовательность натуральных чисел. За ней вводится 0 как символ конца. Найдите максимальный её элемент.
  
#include <iostream>

int main()
{
    int in=0, max=0,i=1;
    do
    {
        std::cin>>in;
        if (in>=max) max=in;
    }
    while (in!=0);
    std::cout<<max;
    return 0;
}
