#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<string> chars = {"a", "b", "c", "b", "u", "a"};
    int i = 0;
    int j = chars.size() - 1;
    for(auto c : chars){
        if(chars[i] == chars[j]){
            i++;
            j--;
        }else{
            if(chars[i] == chars[j-1]){
                cout << chars[j];
            }
            else{
                cout << chars[i];
            }
            break;
        }
    }

    return 0;
}