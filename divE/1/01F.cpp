Дано кубическое уравнение ax3+bx2+cx+d=0 (a≠0). 
Известно, что у этого уравнения есть ровно один корень. Требуется его найти.
  
#include <iostream>
#define EPS 1e-12

double a,b,c,d;
double r,l,x;
double f(double x)
{
  return a*x*x*x + b*x*x + c*x + d;
}

int main() {
    
    
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    r = 1;
    while(f(r) * f(-r) >= 0) r *= 2;
    l = -r;
    while (r - l > EPS)
    {
        x = (l + r) / 2;
        if (f(x) * f(r) > 0) r = x; else l = x;
    }
    printf("%.8lf\n",l);
    
    return 0;
}
