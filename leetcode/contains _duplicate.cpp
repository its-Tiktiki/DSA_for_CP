#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    unordered_set<int> seen;

    for(int n: nums){
        if(seen.count(n) > 0){
            cout << true;
        }
        seen.insert(n);
    }
    cout << false;

    return 0;
}