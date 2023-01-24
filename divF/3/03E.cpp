Имеется стол длины L. На столе разложено N носков так, что никакой носок не вылезает за границы стола. 
Далее имеется умный мальчик Васька, который хочет (сугубо в корыстных целях) замерить толщину покрытия стола носками в M точках.

  
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int L, N, M;
    cin >> L >> N >> M;
    vector<int> cnt(L + 2, 0);
    for (int i = 0; i < N; ++i){
        int l, r;
        cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
    }
    int c = 0;
    vector<int> res(L + 2);
    for (int i = 1; i < L + 2; ++i){
        c += cnt[i];
        res[i] = c;
    }
    for (int i = 0; i < M; ++i){
        int t;
        cin >> t;
        cout << res[t] << endl;
    }
    return 0;
}
