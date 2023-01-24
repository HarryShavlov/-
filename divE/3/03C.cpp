Для данного слова (последовательности строчных латинских букв) выведите следующее за ним (в лексикографическом порядке) слово, которое может быть получено из данного перестановкой букв (анаграмму). 
Если данное слово уже является последним среди всех своих анаграмм, то необходимо вывести первую возможную (в лексикографическом порядке) анаграмму.
  
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string word;
    while (cin >> word) {
        if (next_permutation(word.begin(), word.end())) {
            cout << word << endl;
        } else {
            sort(word.begin(), word.end());
            cout << word << endl;
        }
    }
    return 0;
}
