Найдите максимальный вес золота, который можно унести в рюкзаке вместительностью S, если есть N золотых слитков с заданными весами.
  
  
#include <iostream>
using namespace std;

int S, N, w[10000], dp[10000];

int main() {
    cin >> S >> N;
    for (int i = 1; i <= N; i++) {
        cin >> w[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = S; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j-w[i]] + w[i]);
        }
    }
    cout << dp[S] << endl;
    return 0;
}
