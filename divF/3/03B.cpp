Напишите программу, которая находит в массиве элемент, самый близкий по величине к данному числу.
  
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int k,x, el;
    cin >> k;
    int arr[k];
    for(int i =0; i<k; ++i)
        {
            cin >>arr[i];
        }
    
    cin >> x;
    
    int blizh=abs(x-arr[0]);
	  el = arr[0];
    for(int i =1; i < k;++i)
        {
            if (abs (x - arr[i]) <= blizh)
            {
                blizh = abs(x - arr[i]);
                el = arr[i];
                
            }
        }
    cout << el;
    return 0;
}
