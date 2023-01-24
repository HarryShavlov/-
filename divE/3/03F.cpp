Вам дана перестановка из первых N натуральных чисел. 
Найдите по ней следующую в лексикографическом порядке (будем считать, что за перестановкой N N-1 ... 3 2 1 следует тождественная перестановка, то есть, 1 2 3 ... N).
  
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = n - 2;
    while (i >= 0 && a[i] >= a[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        while (j >= 0 && a[j] <= a[i]) {
            j--;
        }
        swap(a[i], a[j]);
    }

    reverse(a + i + 1, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
