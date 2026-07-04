#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after reading t
    while(t--){
        string a;
        getline(cin, a);
        string reverse;
        
        for(int i = a.length()-1; i >= 0; i--){
            reverse.push_back(a[i]);
        }
        cout << reverse << endl;
    }

    return 0;
}