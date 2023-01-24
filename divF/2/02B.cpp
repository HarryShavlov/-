Вводятся 4 целых неотрицательных числа, не превышающих 100000: a, b, c и d.
  
#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    for (int i = a; i <= b; i++)
        if (i % d == c) std::cout << i << " ";
}
