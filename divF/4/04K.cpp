Дано натуральное число N. Рассмотрим его разбиение на натуральные слагаемые. 
Два разбиения, отличающихся только порядком слагаемых, будем считать за одно, поэтому можно считать, что слагаемые в разбиении упорядочены по невозрастанию.
  
#include<bits/stdc++.h>

using namespace std;
 
void rec(int sum, int last, vector<vector<int>>& sequences, vector<int>& nums) {
    if (sum == 0) {
        sequences.push_back(nums);
    }
    for (int curr = min(last, sum); curr > 0; --curr) {
        nums.push_back(curr);
        rec(sum - curr, curr, sequences, nums);
        nums.pop_back();
    }
}
 
int main() {
    int n;
    cin >> n;
    vector<int> nums;
    vector<vector<int>> sequences;
    rec(n, n, sequences, nums);
    sort(sequences.begin(), sequences.end());
    for (auto& el: sequences) {
        for (auto& e : el)
            cout << e << " ";
        cout << "\n";
    }
}
