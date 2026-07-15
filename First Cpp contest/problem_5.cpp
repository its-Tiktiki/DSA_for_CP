#include <bits/stdc++.h>
using namespace std;
int main(){
	int A, B, C;
	cin >> A >> B >> C;
    set<int> num = {A, B};
    for(int i = 2; i < C; i++){
        num.insert(A*i);
        num.insert(B*i);
    }
    vector<int> v(num.begin(), num.end());
    int step;
    long long c = v[C-1];
    if(c % A  == 0 && c % B == 0){
        step = (A*B) / gcd(A, B);
    }else if(c % A == 0){
        step = A;
    }else{
        step = B;
    }

    while(c >= 0){
        cout << c << " ";
        c -= step;
    }

    return 0;
}