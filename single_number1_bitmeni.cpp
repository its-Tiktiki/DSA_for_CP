#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 1, 2, 3};

    int ans = 0;
    for(int n : nums){
        ans ^= n;
    }
    cout << ans << endl;

    return 0;
}