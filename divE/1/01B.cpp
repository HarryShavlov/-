Дан массив из N целых чисел. Все числа от −109 до 109.Нужно уметь отвечать на запросы вида “Cколько чисел имеют значения от L доR?”.
  
#include <iostream>
#include <algorithm>
using namespace std;

int count_numbers(int arr[], int n, int L, int R) {
    int start = lower_bound(arr, arr + n, L) - arr;
    int end = upper_bound(arr, arr + n, R) - arr;
    return end - start;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int L, R;
        cin >> L >> R;
        int count = count_numbers(arr, n, L, R);
        cout << count << endl;
    }
    return 0;
}
