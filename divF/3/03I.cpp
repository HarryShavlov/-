Напишите программу, которая инвертирует определенный бит в заданном числе (биты при этом нумеруются с 0, начиная с младших).

  
#include <bitset>
#include <iostream>

int main() {
    int A,i;
    std::cin >>A>>i;
    unsigned int x = A;
    unsigned int mask = (1 << i);
    x ^= mask;
    std::cout << x;
}
