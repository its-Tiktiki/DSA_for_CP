#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 1, 4, 4, 1, 4};
    int ans = 0;

    for(int i = 0; i < 32; i++){
        int count = 0;
        for(int n : nums){
            if(n & (1 << i)){
                count++;
            }
        }

        if(count % 3 != 0){
            ans |= (1 << i);
        }
    }
    cout << ans;

    return 0;
}