Дано N предметов массой m1, …, mN и стоимостью c1, …, cN соответственно.
Ими наполняют рюкзак, который выдерживает вес не более M. Какую наибольшую стоимость могут иметь предметы в рюкзаке?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <int> a(n+1), b(n+1);
    for(int i = 1; i <= n; cin >> a[i++]);
    for(int i = 1; i <= n; cin >> b[i++]);

    vector < vector <int> > dp(n+1, vector <int> (m+1));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp[i][j] = max(dp[i-1][j], (j >= a[i] ? dp[i-1][j-a[i]]+b[i] : 0));
        }
    }
    cout << dp[n][m];
}
