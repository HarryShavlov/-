Напишите функцию, вычисляющую длину отрезка по координатам его концов. 
С помощью этой функции напишите программу, вычисляющую периметр треугольника по координатам трех его вершин

#include <iostream>
#include <cmath>

using namespace std;

double L (int x, int y ,int x1, int y1)
{
   double x2 = (double)( x-x1 )*( x-x1 );
   double y2 = (double)( y-y1 )*( y-y1 );
   return sqrt(x2 + y2);
}

int main()
{
    double x1,y1,x2,y2,x3,y3, l1,l2,l3,P;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    l1=L(x1,y1,x2,y2);
    l2=L(x2,y2,x3,y3);
    l3=L(x3,y3,x1,y1);
    P=l1 +l2+l3;
    cout << fixed;
    cout.precision(6);
    cout<< P;
    return 0;
}
