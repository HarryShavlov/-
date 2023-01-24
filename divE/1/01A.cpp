Реализуйте алгоритм бинарного поиска.
  
  
#include <iostream>
using namespace std;

bool binary_search(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = (high + low) / 2;
        if (arr[mid] < x) {
            low = mid + 1;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    int n, k, x;
    cin >> n >> k;
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> x;
        if (binary_search(arr1, n, x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
