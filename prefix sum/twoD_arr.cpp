/*
Given @D array a of N*N integers. Given Q wuaeries
and in each query given a, b, c and d. print sum
of square represented by (a, b) as top left point 
and (c, d) as top bottom right point

constraints 
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int ar[N][N];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> ar[i][j];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long sum = 0;
        for(int i = a; i <= c; ++i){
            for(int j = b; j <= d; ++j){
                sum += ar[i][j];
            }
        }
    }


    return 0;
}