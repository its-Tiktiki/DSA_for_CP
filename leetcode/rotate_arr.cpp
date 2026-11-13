#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    k %= nums.size();

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());


    for(auto n: nums){
        cout << n;
    }

    return 0;
}