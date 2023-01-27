По случаю проведения апрельских интенсивов организаторы решили подарить всем участникам перестановки. 
В связи с эпидемиологической обстановкой числа в перестановках обязаны соблюдать социальную дистанцию. 
Это обозначает, что любые два соседних числа должны различаться не менее чем на k. Помогите организаторам сгенерировать все подходящие перестановки.
  
#include <iostream>
using namespace std;

int n, k;
int permutation[10];
bool used[10];

void solve(int index) {
    if (index == n) {
        for (int i = 0; i < n; i++) cout << permutation[i] << " ";
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!used[i] && (index == 0 || abs(permutation[index - 1] - i) >= k)) {
            used[i] = true;
            permutation[index] = i;
            solve(index + 1);
            used[i] = false;
        }
    }
}

int main() {
    cin >> n >> k;
    solve(0);
    return 0;
}

