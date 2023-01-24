Распечатайте только те значения элементов массива, которые встречаются в нем ровно один раз.
  
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i){
       cin >> v[i];
   }
   for (int i = 0; i < n; ++i){
       bool flag = false;
       for (int j = 0; j < i; ++j){
           if (v[i] == v[j]){
               flag = true;
           }
       }
       for (int j = i + 1; j < n; ++j){
           if (v[i] == v[j]){
               flag = true;
           }
       }
       if (flag == false){
           cout << v[i] << " ";
       }
   }
   return 0;
}
