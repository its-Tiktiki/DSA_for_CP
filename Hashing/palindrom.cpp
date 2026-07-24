#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    while(t--){
        int l, r;
        cin >> l >> r;
        string s;
        cin >> s;
        int hsh[26];
        for(int i = 0; i < 26; ++i){
            hsh[i] = 0;
        }

        // l and r is one based but string is 0 based
        l--; r--;
        for(int i = l; i <= r; ++i){
            hsh[s[i] - 'a']++;
        }
        int oddCt = 0;
        for(int i = 0; i < 26; ++i){
            if(hsh[i] % 2 != 0) oddCt++;
        }
        if(oddCt > 1) cout << "NO\n";
        else cout << "YES\n";

    }


    return 0;
}