Дано натуральное число N. Выведите его представление в двоичном виде в обратном порядке.

#include <iostream>
using namespace std;
int main() {
      int n;
      cin >> n;
     
      while (n)
      {
        cout << n % 2;
        n >>= 1;
      }
}
