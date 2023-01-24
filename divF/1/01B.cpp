Пирожок в столовой стоит a рублей и b копеек. Определите, сколько рублей и копеек нужно заплатить за n пирожков.
  
#include <iostream>

using namespace std;

int main()
{
    int a,b,n;
    cin >> a >> b >> n;
    std::cout << ((a*100+b)*n/100) <<' '<< ((a*100+b)*n )% 100 ; 
    return 0;
}
