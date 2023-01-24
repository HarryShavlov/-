За день машина проезжает n километров. Сколько дней нужно, чтобы проехать маршрут длиной m километров?

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<m / n + (m % n == 0 ?  0 : 1);
    return 0;
}
