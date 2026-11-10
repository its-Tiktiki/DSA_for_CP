#include <bits/stdc++.h>
using namespace std;
int main(){
    string A;
    cin >> A;

    for(int i = 0; i < A.size(); ++i){
        if(A[i] == 's'){
            A[i] = '$';
        }
    }
    cout << A;
    cout << A+"arpa";
    return 0;
}