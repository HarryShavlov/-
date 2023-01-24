На прямой расположены стойла, в которые необходимо расставить коров так, чтобы минимальное расcтояние между коровами было как можно больше.
  
#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{   size_t n, k;
    std::cin >> n >> k; std::vector<size_t> a(n);
    for(auto& e : a) std::cin >> e;
 
    std::sort(a.begin(), a.end());
 
    size_t left  = 0;
    size_t right = a.back() - a[0] + 1;
 
    while(left < right)
    {
        size_t mid  = (left + right)/2;
        size_t cows = 1;
        size_t last = a[0];
 
        for(size_t i = 1; i < n; ++i)
        {
            auto cur = a[i];
            if(cur - last > mid)
            {   cows +=  1;
                last = cur;
            }
        }
 
        if(cows >= k) left  = mid+1;
        else          right = mid;
    }
 
    std::cout << left;
}
