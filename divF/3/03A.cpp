Дан массив, состоящий из целых чисел. 
Напишите программу, которая в данном массиве определит количество элементов, у которых два соседних и, при этом, оба соседних элемента меньше данного.

  
#include <iostream>
#include <cmath>
using namespace std;
 
int main () {
    int x, c=0;
    cin >> x;
        int a[x];
    for (int i=0; i < x; ++i){
      cin >> a[i];
    }
    for (int i = 1; i<x-1; i++)
        if (a[i]>a[i - 1] && a[i]>a[i + 1])
            c++;
    cout << c;
 
    return 0;
}
