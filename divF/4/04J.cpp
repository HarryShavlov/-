Во входном файле задано целое положительное число N, не превосходящее 109. Найдите остаток от деления числа  (произведения всех чисел от 1 до N) на 106+3.
 
#include <iostream>

int min(int a, int b){
    if (a < b)
        return a;
    return b;
}

int main(){
    int n;
    std::cin >> n;
    unsigned long long int p = 1;
    for (int i = 2; i < min(n, 1000003) + 1 ; ++i){
        p = (p * i) % (1000003);
    }

    std::cout << p;

    return 0;
}
