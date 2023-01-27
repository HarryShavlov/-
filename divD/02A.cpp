Дана непустая строка S, длина которой N не превышает 106. Будем считать, что элементы строки нумеруются от 1 до N.
Требуется для всех i от 1 до N вычислить её префикс-функцию .
  
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int prefix[n];
    prefix[0] = 0;
    int j = 0;
    for (int i = 1; i < n; i++) {
        while (j > 0 && s[i] != s[j]) {
            j = prefix[j-1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        prefix[i] = j;
    }

    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }
    cout << endl;
    return 0;
}
