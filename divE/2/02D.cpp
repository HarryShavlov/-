Стек с поддержкой максимума

#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
stack<int> max_s;

void push(int v) {
    s.push(v);
    if (max_s.empty() || v >= max_s.top()) {
        max_s.push(v);
    }
}

void pop() {
    if (s.top() == max_s.top()) {
        max_s.pop();
    }
    s.pop();
}

void max() {
    cout << max_s.top() << endl;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string command;
        cin >> command;
        if (command == "push") {
            int v;
            cin >> v;
            push(v);
        } else if (command == "pop") {
            pop();
        } else {
            max();
        }
    }
    return 0;
}
