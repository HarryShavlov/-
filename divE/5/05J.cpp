Дан набор гирек массой m1, …, mN. Можно ли их разложить на две чаши весов, чтобы они оказались в равновесии?
  
#include<iostream>
using namespace std;

const int N = 100;

int n, m[N], s;
bool dp[N][N*N];

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>m[i];
        s += m[i];
    }
    if(s % 2){
        cout<<"NO";
        return 0;
    }
    s /= 2;
    dp[0][0] = true;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= s; j++){
            dp[i][j] = dp[i-1][j];
            if(j >= m[i]) dp[i][j] = dp[i][j] || dp[i-1][j-m[i]];
        }
    }
    if(dp[n][s]) cout<<"YES";
    else cout<<"NO";
    return 0;
}
