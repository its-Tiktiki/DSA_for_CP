#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {4, 1, 2, 1, 2};

    int ans = 0;
    for(int i= 0; i < 5; ++i){
        ans = ans ^ arr[i];
    }

    cout << ans;

    return 0;
}