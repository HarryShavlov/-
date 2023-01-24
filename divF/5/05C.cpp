У вас есть несколько камней известного веса w1,…,wn.
Напишите программу, которая распределит камни в две кучи так, что разность весов этих двух куч будет минимальной

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> stones(n);
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }
    int total_weight = 0;
    for (int i = 0; i < n; i++) {
        total_weight += stones[i];
    }
    int half_weight = total_weight / 2;
    vector<int> dp(half_weight + 1);
    for (int i = 0; i < n; i++) {
        for (int j = half_weight; j >= stones[i]; j--) {
            dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
        }
    }
    cout << total_weight - 2 * dp.back() << endl;
    return 0;
}
