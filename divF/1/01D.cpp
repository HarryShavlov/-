n школьников делят k яблок “поровну”, то есть так, чтобы количество яблок, доставшихся любым двум школьникам, отличалось бы не более, чем на 1.
#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    std::cout << (n - k % n) % n << endl; 
    return 0;
}
