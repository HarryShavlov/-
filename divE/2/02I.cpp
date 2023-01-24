В постфиксной записи (или обратной польской записи) операция записывается после двух операндов. 
Например, сумма двух чисел A и B записывается как A B +. Запись B C + D * обозначает привычное нам (B + C) * D, а запись A B C + D * + означает A + (B + C) * D. 
Достоинство постфиксной записи в том, что она не требует скобок и дополнительных соглашений о приоритете операторов для своего чтения.
  
#include <iostream>
#include <stack>
#include <iomanip>
#include <string>

using namespace std;

double evaluatePostfix(string exp) {
    stack<double> s;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == ' ') {
            continue;
        }
        else if (exp[i] == '+') {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(b + a);
        }
        else if (exp[i] == '-') {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(b - a);
        }
        else if (exp[i] == '*') {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(b * a);
        }
        else {
            double operand = 0;
            while (i < exp.length() && exp[i] >= '0' && exp[i] <= '9') {
                operand = (operand * 10) + (exp[i] - '0');
                i++;
            }
            i--;
            s.push(operand);
        }
    }
    return s.top();
}

int main() {
    string exp;
    getline(cin, exp);
    cout << fixed << setprecision(0) << evaluatePostfix(exp) << endl;
    return 0;
}
