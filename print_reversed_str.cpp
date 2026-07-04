#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after reading t
    while(t--){
        string a;
        getline(cin, a);
        
        for(int i = a.length()-1; i >= 0; i--){
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}